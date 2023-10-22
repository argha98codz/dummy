class Solution {
public:
	vector<int> xorQueries(vector<int>& a, vector<vector<int>>& queries) {
		int n = a.size();
		vector<int> pref_xors(n);
		pref_xors[0] = a[0];
		for(int i=1;i<n;i++) pref_xors[i] = pref_xors[i-1]^a[i];
		vector<int> res;
		for(auto x : queries){
			int r = x[1], l = x[0];
			int cur = pref_xors[r];
			if(l>0) cur = cur^pref_xors[l-1];   // Since we have to remove all elements that occur before l
			res.push_back(cur);
		}
		return res;
	}
};

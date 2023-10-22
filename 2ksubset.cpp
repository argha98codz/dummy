class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> res;   // Will contain all the vectors
		int n = nums.size();
		for(int i=0;i<(1<<n);i++){
			vector<int> cur;
			for(int j=0;j<n;j++){
				if((i>>j) & 1) cur.push_back(nums[j]);  // if the jth bit is set in i then we add it to our current vector
			}
			res.push_back(cur);
		}
		return res;
	}
};

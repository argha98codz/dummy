class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        std::cout << deliciousness.size() << std::endl;
        std::unordered_map<int,int> histogram;
        for(auto x : deliciousness) {
            ++histogram[x];
        }

        int numPair = 0;
        while(histogram.size() > 0)
        {
            auto it = histogram.begin();
            int x = it->first;
            int powerOf2 = (1<<21);
            int y;
            while(((y = powerOf2 - x) >= 0) && (powerOf2 != 0)) 
            {
                auto itHist = histogram.find(y);
                if(itHist != std::end(histogram))
                {
                    if(itHist == it)
                    {
                        long int n = it->second;
                        numPair += ((n*(n - 1))/2);
                    }
                    else
                    {
                        int n = it->second;
                        int m = itHist->second;
                        numPair += n*m;
                    }
                }
                powerOf2 >>= 1;
            }
            histogram.erase(it);
        }
        return numPair % (1000000007);
    }
};

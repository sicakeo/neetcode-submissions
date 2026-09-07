class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1)
            return 0;
        else if (prices.size() == 2) {
            return prices[1] - prices[0] > 0 ? prices[1] - prices[0] : 0; 
        }

        int maxProf = 0;
        int i = 0;
        int j;
        
        while(i < prices.size()) {
            j = i+1;
            int prof;
            while(j < prices.size() && prices[i] < prices[j] ) {
                prof = prices[j] - prices[i];
                maxProf = max(maxProf, prof);
                j++;
            }
            i++;
        }

        return maxProf;
    }
};

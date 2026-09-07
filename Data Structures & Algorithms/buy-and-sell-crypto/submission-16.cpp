class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0;

        int i = 0;
        int j;
        if(prices.size() == 1)
            return 0; 
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

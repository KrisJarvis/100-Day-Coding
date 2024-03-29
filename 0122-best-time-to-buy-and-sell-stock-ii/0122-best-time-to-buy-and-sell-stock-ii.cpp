class Solution {
public:
    int maxProfit(vector<int>& prices) {
       //Optimal Solution T.C.: O(N), S.C.: O(1)
        
        int maxprofit = 0;

        int n = prices.size();

        for(int i = 1; i<n; i++){
            if(prices[i]>prices[i-1]){
                maxprofit+=prices[i]-prices[i-1];
            }
        }

        return maxprofit;
    }
};

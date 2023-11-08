class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int mainValue = 0;
        int maxValue = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            maxValue = prices[i] - lsf;
            if(mainValue < maxValue){
                mainValue = maxValue;
            }
        }
        return mainValue;
    }
};
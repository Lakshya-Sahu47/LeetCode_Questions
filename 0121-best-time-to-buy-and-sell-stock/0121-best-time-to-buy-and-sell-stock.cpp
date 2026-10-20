class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p = 0;
        int s = 0;
        for(int i = 1; i < prices.size(); i++){
            int sum = prices[i] - prices[s];
            max_p = max(max_p, sum);
            if(prices[i] < prices[s]){
                s = i;
            }
        }
        return max_p;
    }
};
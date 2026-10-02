class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_m = 0;
        for(int i = 0; i < accounts.size(); i++){
            int money = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                money += accounts[i][j];
            }
            if(money > max_m){
                max_m = money;
            }
        }
        return max_m;        
    }
};
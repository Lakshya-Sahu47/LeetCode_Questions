class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_m = 0;

        for (auto& customer : accounts) {
            int money = 0;

            for (int balance : customer) {
                money += balance;
            }

            max_m = max(max_m, money);
        }

        return max_m;
    }
};
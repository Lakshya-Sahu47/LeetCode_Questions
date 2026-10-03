class Solution {
public:
    bool check(int n){
        int count = 0;
        while(n > 0){
            count++;
            n /= 10;
        }
        if(count % 2 == 0) return true;
        return false;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto it : nums){
            if(check(it)) count++;
        }
        return count;
    }
};
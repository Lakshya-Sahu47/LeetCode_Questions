class Solution {
public:
    bool checkPerfectNumber(int nums) {
        if(nums <= 1) return false;
        int sum = 1;
        for(int i = 2; i * i <= nums; i++){
            if(nums % i == 0){
                sum += i;
                int other = nums / i;
                if(other != i){
                    sum += other;
                }
            }
        }
        return sum == nums;
    }
};
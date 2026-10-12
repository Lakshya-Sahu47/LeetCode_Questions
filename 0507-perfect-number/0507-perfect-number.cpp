class Solution {
public:
    bool checkPerfectNumber(int nums) {
        int sum = 0;
        for(int i = 1; i <= nums / 2; i++){
            if(nums % i == 0){
                sum += i;
            }
        }
        return (sum == nums) ? true : false;
    }
};
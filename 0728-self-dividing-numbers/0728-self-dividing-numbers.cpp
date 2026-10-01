class Solution {
public:
    bool check_num(int nums){
        int n = nums;
        int last_digit = 0;
        while(n > 0){
            last_digit = n % 10;
            if(last_digit == 0 || nums % last_digit != 0){
                return false;
            }
            n /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i = left; i <= right; i++){
            if(check_num(i)){
                arr.push_back(i);
            }
        }
        return arr;       
    }
};
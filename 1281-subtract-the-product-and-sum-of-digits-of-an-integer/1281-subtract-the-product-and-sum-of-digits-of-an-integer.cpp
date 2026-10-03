class Solution {
public:
    int subtractProductAndSum(int n) {
        int last_digit = 0;
        int num = n;
        int product = 1;
        int sum = 0;
        while(num > 0){
            last_digit = num % 10;
            product *= last_digit;
            sum += last_digit;
            num /= 10;
        }
        return product - sum;
    }
};
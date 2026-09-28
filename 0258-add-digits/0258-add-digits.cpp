class Solution {
public:
    int addDigits(int num) {
        int n = num;
        while(n > 9){
            n = sum_Digit(n);
        }
        return n;        
    }
    int sum_Digit(int num){
        int sum = 0;
        while(num != 0){
            int lastDigit = num % 10;
            sum += lastDigit;
            num /= 10;
        }
        return sum;
    }
};
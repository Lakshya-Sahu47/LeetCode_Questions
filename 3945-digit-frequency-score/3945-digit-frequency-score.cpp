class Solution {
public:
    int digitFrequencyScore(int n) {
        int num = n;
        int sum = 0;
        while(num > 0){
            int ld = num % 10;
            sum += ld;
            num /= 10;
        }
        return sum;
    }
};
class Solution {
public:
    int reverse_digits(int num){
        int n = num;
        int ans = 0;
        while(n > 0){
            int ld = n % 10;
            ans = ans * 10 + ld;
            n /= 10;
        }
        return ans;
    }

    int mirrorDistance(int n) {
        return abs(n - reverse_digits(n));
    }
};
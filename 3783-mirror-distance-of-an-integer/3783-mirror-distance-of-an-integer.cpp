class Solution {
public:
    int mirrorDistance(int num) {
        int n = num;
        int ans = 0;
        while(n > 0){
            int ld = n % 10;
            ans = ans * 10 + ld;
            n /= 10;
        }
        return abs(num - ans);
    }
};
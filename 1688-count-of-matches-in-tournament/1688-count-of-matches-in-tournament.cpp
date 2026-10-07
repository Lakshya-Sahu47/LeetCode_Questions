class Solution {
public:
    int numberOfMatches(int n) {
        int total = 0;
        while(n > 1){
            int r = n % 2;
            total += (n / 2);
            n = n/2 + r;
        }
        return total;
    }
};
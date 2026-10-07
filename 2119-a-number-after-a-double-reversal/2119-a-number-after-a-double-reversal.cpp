class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0) return true;
        int n = num;
        int ld = num % 10;
        if(ld == 0){
            return false;
        }
        return true;
    }
};
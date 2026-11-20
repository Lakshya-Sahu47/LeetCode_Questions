class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x / 2;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if((mid + 1) == x / (mid + 1)){
                return mid + 1;
            }
            else if((mid + 1) > x / (mid + 1)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
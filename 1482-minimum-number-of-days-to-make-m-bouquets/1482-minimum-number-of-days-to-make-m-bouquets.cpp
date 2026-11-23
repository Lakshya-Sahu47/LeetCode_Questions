class Solution {
public:
    int cal(vector<int>& bd, int k, int mid){
        int b = 0;
        int count = 0;
        for(int i = 0; i < bd.size(); i++){
            if(bd[i] <= mid){
                count++;
                if(count / k >= 1){
                    b += 1;
                    count -= k;
                }
            }else{
                count = 0;
            }
        }
        return b;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1ll * m * k > bloomDay.size()) return -1;
        int low = 0;
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(cal(bloomDay, k, mid) >= m){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;              
            }
        }
        return ans;
    }
};
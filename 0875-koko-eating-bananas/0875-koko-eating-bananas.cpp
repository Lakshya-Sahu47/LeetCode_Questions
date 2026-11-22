class Solution {
public:
    long long time_taken(vector<int>& piles, int k){
        long long sum = 0;
        for(int i = 0; i < piles.size(); i++){
            sum += (piles[i] + k - 1) / k;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(time_taken(piles, mid) <= h){
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
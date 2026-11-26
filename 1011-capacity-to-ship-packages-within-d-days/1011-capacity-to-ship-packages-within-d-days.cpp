class Solution {
public:
    int cal(vector<int>& weights, int w){
        int sum = 0;
        int days = 1;
        for(int i = 0; i < weights.size(); i++){
            if(sum + weights[i] > w){
                days++;
                sum = weights[i];
            }else{
                sum += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        int high = 0;
        for(int i = 0; i < weights.size(); i++){
            high += weights[i];
            low = max(low, weights[i]);
        }
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int d = cal(weights, mid);
            if(d <= days){
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
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int left = 0;
        int right = 0;
        long long total = 0;
        int ans = 0;
        while(right < nums.size()){
            total += nums[right];

            while(1ll * (right - left + 1) * nums[right] > total + k){
                total -= nums[left];
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
        
    }
};
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] *= nums[i];
        }
        sort(begin(nums), end(nums));
        
        int n = nums.size();
        int mid = n / 2;
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {            
            if (i < mid) {
                sum -= nums[i];
            } else {
                sum += nums[i];
            }
        }
        return sum;
    }
};
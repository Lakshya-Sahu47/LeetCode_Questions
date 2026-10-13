class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] *= nums[i];
        }
        sort(begin(nums), end(nums));
        int n = nums.size();
        long long neg = accumulate(begin(nums), begin(nums) + n/2, 0ll);
        long long pos = accumulate(begin(nums) + n/2, end(nums), 0ll);
        long long sum = pos - neg;
        return sum;
    }
};
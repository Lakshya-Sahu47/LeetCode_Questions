class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int pv = 0;
        int vv = 0;
        for(int i = 1; i < nums.size() - 1; i++){
            if(nums[i - 1] > nums[i] && nums[i + 1] > nums[i]){
                vv += nums[i];
            }
            if(nums[i - 1] < nums[i] && nums[i + 1] < nums[i]){
                pv += nums[i];
            }
        }
        return  pv - vv;
    }
};
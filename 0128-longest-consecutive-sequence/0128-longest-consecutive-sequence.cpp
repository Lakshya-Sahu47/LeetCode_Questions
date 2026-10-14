class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1)return 0;
        if(nums.size() == 1)return 1;
        sort(begin(nums), end(nums));
        int ans = 1;
        int count = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(i != nums.size() - 1 && nums[i] + 1 == nums[i + 1]){
                count++;
                ans = max(ans, count);
            }
            else if(i != nums.size() - 1 && nums[i] == nums[i + 1]){
                continue;
            }
            else{
                ans = max(ans, count);
                count = 1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool check(vector<int>& nums) {
        int pointer = -1;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n - 1; i++){
            if(nums[i] > nums[i + 1]){
                pointer = i + 1;
                break;
            }
        }
        if(pointer == -1){
            return true;
        }
        for(int i = 0; i < n; i++){
            ans.push_back(nums[(i + pointer) % n]);
        }
        for(int i = 0; i < n - 1; i++){
            if(ans[i] > ans[i + 1]) return false;
        }
        return true;       
    }
};
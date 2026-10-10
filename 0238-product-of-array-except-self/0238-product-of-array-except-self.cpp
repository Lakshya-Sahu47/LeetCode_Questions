class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size(), 0);
        int p = 1, s = 1;
        int i = 0;
        int j = nums.size() - 1;
        while(i < nums.size()){
            prefix.push_back(p);
            suffix[j] = s;
            s *= nums[j];
            j--;
            p *= nums[i];
            i++;            
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = prefix[i] * suffix[i];
        }
        return nums;
    }
};
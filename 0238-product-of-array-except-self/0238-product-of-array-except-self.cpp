class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[i] = prod;
            prod *= nums[i];
        }
        prod = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            int temp = mpp[i] * prod;
            prod *= nums[i];
            nums[i] = temp;
        }
        return nums;
    }
};
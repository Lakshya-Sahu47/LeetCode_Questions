class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int sum = 0;
        mpp[0] = 1;
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            int temp = sum - k;
            if(mpp.find(temp) != mpp.end()){
                total += mpp[temp];
            }
            mpp[sum]++;
        }
        return total;
    }
};
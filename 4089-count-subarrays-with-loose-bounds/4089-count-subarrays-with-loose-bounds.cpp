class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long total = 0;
        long long count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < minK || nums[i] > maxK){
                count = 0;
            }
            else{
                count++;
                total += count;
            }
        }
        return total;
    }
};
class Solution {
public:
    int first_o(vector<int>& nums, int x){
        int low = 0;
        int high = nums.size() - 1;
        int first = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == x){
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return first;
    }
    int last_o(vector<int>& nums, int x){
        int low = 0;
        int high = nums.size() - 1;
        int last = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == x){
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans_l = first_o(nums, target);
        if(ans_l == -1) return {-1, -1};
        int ans_h = last_o(nums, target);
        return {ans_l, ans_h};
    }
};
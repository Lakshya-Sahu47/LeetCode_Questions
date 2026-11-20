class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if((mid == 0 && nums[mid + 1] != nums[mid]) ||
            (mid == nums.size() - 1 && nums[mid - 1] != nums[mid])){
                return nums[mid];
            }

            if(nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]){
                return nums[mid];
            }
            if(mid % 2 != 0){
                if(nums[mid] == nums[mid + 1]){
                high = mid - 1;
                }
                else if(nums[mid] == nums[mid - 1]){
                low = mid + 1;
                }
            }
            else{
                if(nums[mid] == nums[mid + 1]){
                    low = mid + 1;                
                }
                else if(nums[mid] == nums[mid - 1]){
                    high = mid - 1;                
                }
            }
            
        }
        return nums[low];
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int second = nums.size() - 1;
        int i = 0;
        int j = nums.size() - 1;
        while(i < nums.size()){
            if(nums[i] == 0){
                swap(nums[i], nums[zero]);
                zero++;
                i++;
            }
            else if(nums[i] != 0){
                i++;
            }
        }
         while(j >= 0){
            if(nums[j] == 2){
                swap(nums[j], nums[second]);
                second--;
                j--;
            }
            else if(nums[j] != 2){
                j--;
            }
        }
    }
};
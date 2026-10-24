class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int second = n - 1;
        int curr = 0;
        while(curr <= second){
            if(nums[curr] == 0){
                swap(nums[curr], nums[zero]);
                zero++;
                curr++;
            }
            else if(nums[curr] == 2){
                swap(nums[curr], nums[second]);
                second--;
            }
            else{
                curr++;
            }
        }
    }
};
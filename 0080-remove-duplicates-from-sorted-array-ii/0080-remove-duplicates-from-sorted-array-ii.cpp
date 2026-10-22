class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int r = 0;
        while(r < nums.size()){
            int count = 1;
            while(r < nums.size() - 1 && nums[r] == nums[r + 1]){
                r++;
                count++;
            }
            int c = min(2, count);
            for(int i = 0; i < c; i++){
                nums[l] = nums[r];
                l++;
            }
            r++;
        }
        return l;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int can = 0;
        for(auto it : nums){
            if(count == 0){
                can = it;
            }
            
            if(it == can){
                count++;
            }
            else{
                count--;
            }
        }
        return can;
    }
};
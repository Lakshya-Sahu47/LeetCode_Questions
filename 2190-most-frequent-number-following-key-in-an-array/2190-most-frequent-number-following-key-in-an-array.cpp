class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int freq[1001] = {0};
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == key){
                freq[nums[i + 1]] += 1;
            }
        }
        int max_num = 0;
        int max_freq = 0;
        for(int i = 1; i < size(freq); i++){
            if(freq[i] > max_freq){
                max_freq = freq[i];
                max_num = i;
            }
        }
        return max_num;
    }
};
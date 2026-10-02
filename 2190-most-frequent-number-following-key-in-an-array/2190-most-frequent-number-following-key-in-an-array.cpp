class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == key){
                mpp[nums[i + 1]]++;
            }
        }
        int max_num = 0;
        int max_freq = 0;
        for(auto it : mpp){
            if(it.second > max_freq){
                max_num = it.first;
                max_freq = it.second;
            }
        }
        return max_num;
    }
};
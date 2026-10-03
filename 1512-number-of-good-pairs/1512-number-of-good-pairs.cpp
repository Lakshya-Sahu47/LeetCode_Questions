class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101] = {0};
        int count = 0;
        for(auto it : nums){
            count += freq[it];
            freq[it]++;
        }
        return count;
    }
};
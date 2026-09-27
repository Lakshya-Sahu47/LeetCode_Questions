class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int freq[101] = {0};
        int sum = 0;
        for(auto it : nums){
            freq[it]++;
        }
        vector<int> ans;
        int remaining = nums.size();
        while(remaining > 0){
            for(int i = 0; i <= 100; i++){
                if(freq[i] > 0){
                    ans.push_back(i);
                    freq[i]--;
                    remaining--;
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> mpp;
        int sum = 0;
        for(auto it : nums){
            mpp[it]++;
            sum += it;
        }
        vector<int> ans;
        while(sum > 0){
            for(auto it : mpp){
                if(it.second > 0){
                    ans.push_back(it.first);
                    mpp[it.first]--;
                    sum -= it.first;
                }
            }
        }
        return ans;
    }
};
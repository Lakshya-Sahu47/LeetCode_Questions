class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        int max_count = 0;
        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int temp = 0;
                int count = 0;
                while(st.find(it + temp) != st.end()){
                    temp++;
                    count++;
                }
                max_count = max(max_count, count);
            }
        }
        return max_count;
    }
};
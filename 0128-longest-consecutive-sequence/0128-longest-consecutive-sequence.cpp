class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n  = nums.size();
        int ans = 1;
        unordered_set<int> arr;
        if(n == 0) return 0;

        for(int i = 0; i < n; i++){
            arr.insert(nums[i]);
        }

        for(auto it : arr){
            if(arr.find(it - 1) == arr.end()){
                int cnt = 1;
                int x = it;
                while(arr.find(x + 1) != arr.end()){
                    x++;
                    cnt++;
                }
                ans = max(ans, cnt);
            }

        }
        return ans;    
    }
};
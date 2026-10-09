class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        int expected = 1;
        int freq[101] = {0};
        for(auto it : heights){
            freq[it]++;
        }
        for(int i = 0; i < heights.size(); i++){
            while(freq[expected] == 0){
                expected++;
            }

            if(heights[i] != expected){
                count++;
            }

            freq[expected]--;
        }
        return count;
    }
};
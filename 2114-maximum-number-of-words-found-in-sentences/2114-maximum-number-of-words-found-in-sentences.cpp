class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_s = 0;

        for (string s : sentences) {
            int count = 1;
            for (char c : s) {
                if (c == ' ') {
                    count++;
                }
            }
            max_s = max(max_s, count);
        }
        return max_s;
    }
};
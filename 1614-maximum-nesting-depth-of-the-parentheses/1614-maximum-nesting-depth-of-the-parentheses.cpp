class Solution {
public:
    int maxDepth(string s) {
        int max_s = 0;
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                sum++;
            }
            else if(s[i] == ')'){
                sum--;
            }
            max_s = max(max_s, sum);
        }
        return max_s;
    }
};
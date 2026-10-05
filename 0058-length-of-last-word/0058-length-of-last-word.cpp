class Solution {
public:
    int lengthOfLastWord(string s) {
        int lws = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ' ' ){
                if(lws != 0) break;
            }
            else{
                lws++;
            }
        }
        return lws;
    }
};
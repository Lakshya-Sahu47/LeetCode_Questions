class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size() == 0){
            return t[0];
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i  = 0;
        while(s[i] == t[i]){
            i++;
        }
        return t[i];
    }
};
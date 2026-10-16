class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string s = strs[0];

        for(int i = 1; i < strs.size(); i++){
            string x = strs[i];
            int j = 0;

            while(j < s.size() && j < x.size() && s[j] == x[j]){
                j++;
            }

            s.resize(j);
            
            if(s.empty()) return "";
        }
        return s;
    }
};
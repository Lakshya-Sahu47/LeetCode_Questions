class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];

        for(int i = 0; i < strs.size(); i++){
            string x = strs[i];
            string temp = "";
            for(int j = 0; j < s.size(); j++){
                if(s[j] == x[j]){
                    temp += s[j];
                }
                else{
                    s = temp;
                    break;
                }
            }
        }
        return s;
    }
};
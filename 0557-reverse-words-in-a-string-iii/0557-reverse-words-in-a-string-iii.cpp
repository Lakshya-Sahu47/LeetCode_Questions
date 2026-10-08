class Solution {
public:
    void reverse_s(string& s,int low,int high){
        while(low < high){
            swap(s[low], s[high]);
            low++;
            high--;
        }
    }
    string reverseWords(string s) {
        int i = 0;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == ' ' && j != 0){
                reverse_s(s, i, j - 1);
                i = j + 1;
            }
            else if(j == s.size() - 1){
                reverse_s(s, i, j);
            }
        }
        return s;        
    }
};
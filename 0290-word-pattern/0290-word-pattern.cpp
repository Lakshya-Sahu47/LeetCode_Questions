class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char> mpp1;
        map<char, string> mpp2;

        stringstream ss(s);
        string word;
        int i = 0;
        
        while(ss >> word){
            if(i >= pattern.size()) return false;

            char ch = pattern[i];
            if(mpp1.find(word) == mpp1.end()){
                mpp1[word] = ch; 
            }

            if(mpp2.find(ch) == mpp2.end()){
                mpp2[ch] = word; 
            }

            if(mpp1[word] != ch || mpp2[ch] != word){
                return false;
            }
            i++;
        }
        return i == pattern.size();
    }
};
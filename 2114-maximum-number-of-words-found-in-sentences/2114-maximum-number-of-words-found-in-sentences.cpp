class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_s = 0;
        for(int i = 0; i < sentences.size(); i++){
            int count = 0;
            string s = sentences[i];
            string word;
            stringstream ss(s);
            while(ss >> word){
                count++;
            }
            max_s = max(max_s, count);
        }
        return max_s;
    }
};
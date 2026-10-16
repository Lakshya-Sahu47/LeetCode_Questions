class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26, 1);

        for(int i = 0; i < sentence.size(); i++){
            freq[sentence[i] - 'a']--;
        }
        
        for(auto it : freq){
            if(it > 0){
                return false;
            }
        }
        return true;
    }
};
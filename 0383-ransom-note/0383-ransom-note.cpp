class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26];

        for(auto it : magazine){
            freq[it - 'a']++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            if(freq[ransomNote[i] - 'a'] > 0){
                freq[ransomNote[i] - 'a']--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
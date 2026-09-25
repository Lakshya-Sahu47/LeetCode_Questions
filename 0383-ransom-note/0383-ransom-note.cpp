class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        for(auto it : magazine){
            freq[it - 'a']++;
        }

        for(auto it : ransomNote){
            if(freq[it - 'a'] == 0) return false;
            freq[it - 'a']--;
        }
        return true;

    }
};
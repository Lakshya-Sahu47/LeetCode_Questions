class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mpp1;
        map<char, char> mpp2;

        for(int i = 0; i < s.size(); i++){
            auto it1 = mpp1.find(s[i]);
            auto it2 = mpp2.find(t[i]);

            if (it1 != mpp1.end() && it1->second != t[i]) {
                return false;
            }

            if (it2 != mpp2.end() && it2->second != s[i]) {
                return false;
            }
            mpp1[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }
        return true;
    }
};
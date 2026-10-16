class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mpp1(256, -1);
        vector<int> mpp2(256, -1);

        for(int i = 0; i < s.size(); i++){
            unsigned char a = s[i];
            unsigned char b = t[i];

            if (mpp1[a] == -1 && mpp2[b] == -1) {
                mpp1[a] = b;
                mpp2[b] = a;
            }
            else if (mpp1[a] != b || mpp2[b] != a) {
                return false;
            }
        }
        return true;
    }
};
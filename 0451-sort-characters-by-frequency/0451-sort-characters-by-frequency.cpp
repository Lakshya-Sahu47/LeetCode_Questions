class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(128, 0);
        for(auto it : s){
            freq[it]++;
        }
        auto lambda = [&](char a, char b){
            if(freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b];
        };

        sort(begin(s), end(s), lambda);

        return s;

    }
};
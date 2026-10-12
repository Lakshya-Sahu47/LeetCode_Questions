class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<bool> freq(n, true);
        freq[0] = false;
        freq[1] = false;

        for(int i = 2; i * i < n; i++){
            if(freq[i] == true){
                for(int j = i * i; j < n; j += i){
                    freq[j] = false;
                }
            }
        }
        
        int count = 0;
        for(auto it : freq){
            if(it == true){
                count++;
            }
        }
        return count;
    }
};
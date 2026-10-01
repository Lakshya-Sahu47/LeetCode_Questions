class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> arr(n, true);
        arr[0] = arr[1] = false;

        for(int i = 4; i < n; i += 2) {
            arr[i] = false;
        }

        for(int i = 3; 1LL * i * i < n; i += 2) {
            if(arr[i]) {
                for(int k = i * i; k < n; k += 2 * i) {
                    arr[k] = false;
                }
            }
        }

        int count = 1; 
        for(int i = 3; i < n; i += 2) {
            if(arr[i]) count++;
        }

        return count;
    }
};
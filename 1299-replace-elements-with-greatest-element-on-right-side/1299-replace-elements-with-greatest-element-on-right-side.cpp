class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max_arr = -1;

        for(int i = n - 1; i >= 0; i--){
            int temp = arr[i];
            arr[i] = max_arr;
            max_arr = max(max_arr, temp);
        }

        return arr;
    }
};
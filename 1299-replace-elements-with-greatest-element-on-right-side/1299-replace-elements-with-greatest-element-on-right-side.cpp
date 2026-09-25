class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;
        int max_arr = INT_MIN;
        for(int i = arr.size() - 2; i >= 0; i--){
            max_arr = max(temp, max_arr);
            temp = arr[i];
            arr[i] = max_arr;
        }
        return arr;
    }
};
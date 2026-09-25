class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_s = -1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == max_s || i == 0){
                int j = i + 1;
                max_s = -1;
                while(j < arr.size()){
                    max_s = max(max_s, arr[j]);
                    j++;
                }
            }
            if(max_s != -1){
                arr[i] = max_s;
            }
            else{
                arr[i] = -1;
            }
        }
        return arr;
    }
};
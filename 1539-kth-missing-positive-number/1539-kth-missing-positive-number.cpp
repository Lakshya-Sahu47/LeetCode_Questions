class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = k;
        int i = 0;
        int j = 0;
        while (count > 0){
            i++;
            if(j < arr.size() && arr[j] == i){
                j++;                
            }
            else{
                count--;
            }
        }
        return i;
    }
};
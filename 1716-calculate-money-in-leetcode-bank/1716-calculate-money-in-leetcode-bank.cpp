class Solution {
public:
    int totalMoney(int n) {
        int num = n;
        int sum = 0;
        int round = 0;
        int count = 1;
        while(num > 0){
            if(round / 7 >= 1 && round % 7 == 0){
                count = 1 + round / 7;
            }
            sum += count;
            round++;
            count++;
            num--;
        }
        return sum;
    }
};
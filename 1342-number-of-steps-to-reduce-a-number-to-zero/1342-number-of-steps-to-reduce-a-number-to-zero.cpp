class Solution {
public:
    int numberOfSteps(int num) {
        int n = num;
        int counter = 0;
        while(n != 0){
            if(n % 2 == 0){
                counter++;
                n /= 2;
            }
            else{
                n -= 1;
                counter++;
            }
        }
        return counter;
        
    }
};
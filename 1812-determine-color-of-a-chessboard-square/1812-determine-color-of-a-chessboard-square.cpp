class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(int(coordinates[1]) % 2 == 1){
            if(coordinates[0] == 'b' || coordinates[0] == 'd' || coordinates[0] == 'f' || coordinates[0] == 'h'){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(coordinates[0] == 'b' || coordinates[0] == 'd' || coordinates[0] == 'f' || coordinates[0] == 'h'){
                return false;
            }
            else{
                return true;
            }
        }
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int boat = 0;
       sort(begin(people), end(people));
       int i = 0;
       int j = people.size() - 1;
       while(i <= j){
        int sum = people[i] + people[j];
        if(sum <= limit && i != j){
            boat += 1;
            i++;
            j--;
        }
        else if(sum > limit){
            j--;
            boat += 1;
        }
        else{
            boat += 1;
            j--;
        }
       }
       return boat;
    }
};
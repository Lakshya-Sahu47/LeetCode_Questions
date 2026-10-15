class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people), end(people));

        int boat = 0;
        int i = 0;
        int j = people.size() - 1;

        while(i <= j){
            int sum = people[i] + people[j];
            if(sum <= limit && i != j){
                boat += 1;
                i++;
                j--;
            }
            else{
                boat += 1;
                j--;
            }
        }
        
       return boat;
    }
};
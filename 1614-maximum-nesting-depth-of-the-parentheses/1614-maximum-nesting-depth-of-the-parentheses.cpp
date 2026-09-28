class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == ')'){
                st.push(s[i]);
            }
        }
        int max_s = 0;
        int sum = 0;
        while(!st.empty()){
            if(st.top() == ')'){
                sum++;
                st.pop();
            }
            else if(st.top() == '('){
                sum--;
                st.pop();
            }
            max_s = max(sum, max_s);
        }
        return max_s;
    }
};
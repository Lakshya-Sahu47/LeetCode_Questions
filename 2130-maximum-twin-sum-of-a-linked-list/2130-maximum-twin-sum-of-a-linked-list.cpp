/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* mid = head;
        ListNode* fast = head;
        while(fast != nullptr){
            st.push(mid -> val);
            mid = mid -> next;
            fast = fast -> next -> next;
        }
        int max_s = 0;
        while(mid != nullptr){
            int sum = st.top() + mid -> val;
            max_s = max(max_s, sum);
            mid = mid -> next;
            st.pop();
        }
        return max_s;
    }
};
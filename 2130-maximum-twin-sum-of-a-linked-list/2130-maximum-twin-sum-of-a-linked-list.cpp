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
        int max_s = 0;
        ListNode* left = nullptr;
        ListNode* fast = head;
        ListNode* temp;

        while(fast != nullptr){
            fast = fast -> next -> next;
            temp = head;
            head = head -> next;
            temp -> next = left;
            left = temp;            
        }

        ListNode* mover1 = left;
        ListNode* mover2 = head;
        while(mover2 != nullptr){
            int sum = mover1 -> val + mover2 -> val;
            max_s = max(max_s, sum);
            mover2 = mover2 -> next;
            mover1 = mover1 -> next;
        }

        return max_s;
    }
};
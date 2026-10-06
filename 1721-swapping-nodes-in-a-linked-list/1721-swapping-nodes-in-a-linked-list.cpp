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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == nullptr || head -> next == nullptr){
            return head;
        }
        ListNode* value1 = head;
        ListNode* value2 = head;
        ListNode* temp = head -> next;
        int count = 1;
        while(temp != nullptr){
            if(count < k){
                value1 = value1 -> next;
                temp = temp -> next;
            }
            else{
                value2 = value2 -> next;
                temp = temp -> next;
            }
            count++;
        }
        int store = value1 -> val;
        value1 -> val = value2 -> val;
        value2 -> val = store;
        return head;
    }
};
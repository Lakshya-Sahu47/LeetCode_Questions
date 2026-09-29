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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;

        if(head -> next == nullptr) return head;
        
        ListNode* curr = head;
        ListNode* nextN = curr -> next;
        while(nextN != nullptr){
            if(curr -> val == nextN -> val){
                ListNode* temp = curr -> next;
                nextN = nextN -> next;
                curr->next = nextN;
                delete temp;
            }
            else{
                curr = curr -> next;
                nextN = curr -> next; 
            }
        }
        return head;
    }
};
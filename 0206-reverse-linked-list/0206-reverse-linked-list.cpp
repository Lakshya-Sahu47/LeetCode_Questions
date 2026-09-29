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
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr){
            return nullptr;
        }
        if(head -> next == nullptr){
            return head;
        }

        ListNode* temp = head;
        ListNode* head1 = nullptr;
        ListNode* nextNode;

        while(temp != nullptr){
            nextNode = temp -> next;
            ListNode* newNode = new ListNode(temp->val, head1);
            head1 = newNode;
            temp = nextNode;
        }
        return head1;
    }
};
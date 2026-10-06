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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr){
            return head;
        }
        ListNode* head1 = head;
        ListNode* head2 = head -> next;
        head = head -> next -> next;

        ListNode* mover1 = head1;
        ListNode* mover2 = head2;
        ListNode* temp = head;
        while(temp != nullptr && temp -> next != nullptr){
            mover1 -> next = temp;
            mover2 -> next = temp -> next;
            mover1 = mover1 -> next;
            mover2 = mover2 -> next;
            temp = temp -> next -> next;
        }
        if(temp != nullptr){
            mover1 -> next = temp;
            mover1 = mover1 -> next;
        }
        mover1 -> next = head2;
        mover2 -> next = nullptr;
        head = head1;
        return head;        
    }
};
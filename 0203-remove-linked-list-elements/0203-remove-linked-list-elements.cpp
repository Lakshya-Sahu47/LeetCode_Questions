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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* prev = head;
        ListNode* mover = head -> next;
        while(prev -> val == val){
            if(prev->next == nullptr){
                return nullptr;
            }
            ListNode* temp = prev;
            head = head -> next;
            mover = mover -> next;
            prev = head;
            delete temp;
        }
        while(mover != nullptr){
            if(mover -> val == val){
                ListNode* temp = mover;
                mover = mover -> next;
                prev -> next = mover;
                delete temp;
            }
            else{
                mover = mover -> next;
                prev = prev -> next;
            }            
        }
        return head;
    }
};
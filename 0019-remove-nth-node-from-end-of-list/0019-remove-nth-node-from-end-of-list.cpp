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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr || head -> next == nullptr){
            return nullptr;
        }

        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp -> next;
        }

        if(n == count){
            ListNode* garbage = head;
            head = head -> next;
            delete garbage;
            return head;
        }

        temp = head;
        for(int i = 1; i < count - n; i++){
            temp = temp -> next;
        }
        ListNode* garbage = temp -> next;
        temp -> next = temp -> next -> next;
        delete garbage;
        return head;        
    }
};
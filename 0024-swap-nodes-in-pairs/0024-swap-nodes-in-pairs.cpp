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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        if(head -> next == nullptr){
            return head;
        }
        ListNode* pair1 = head;
        ListNode* pair2 = head -> next;
        ListNode* temp = pair2 -> next;
        ListNode* prev;
        pair1 -> next = temp;
        pair2 -> next = pair1;
        head = pair2;
        prev = pair1;
        pair1 = pair1 -> next;


        while(pair1 != nullptr && pair1 -> next != nullptr){
            pair2 = pair1 -> next;
            ListNode* temp = pair2 -> next;
            pair1 -> next = temp;
            pair2 -> next = pair1;
            prev -> next = pair2;
            prev = pair1;
            pair1 = pair1 -> next;                      
        }
        return head;
    }
};
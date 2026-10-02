/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int countA = 0;
        int countB = 0;

        while(tempA != nullptr){
            tempA = tempA -> next;
            countA++;
        }

       
        while(tempB != nullptr){
            tempB = tempB -> next;
            countB++;
        }

        tempA = headA;
        tempB = headB;

        while(countA < countB){
            tempB = tempB -> next;
            countB--;
        }
        
        while(countA > countB){
            tempA = tempA -> next;
            countA--;
        }
        
        while(tempA != tempB){
            tempA = tempA -> next;
            tempB = tempB -> next;
        }
        
        return tempA;
    }
};
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
    int getDecimalValue(ListNode* head) {
        ListNode* mover = head;
        int count = 0;
        while(mover != nullptr){
            mover = mover -> next;
            count++;
        }
        mover = head;
        int num = 0;
        while(mover != nullptr){
            num += (mover -> val) * pow(2, (count - 1));
            mover = mover -> next;
            count--;
        }
        return num;
    }
};
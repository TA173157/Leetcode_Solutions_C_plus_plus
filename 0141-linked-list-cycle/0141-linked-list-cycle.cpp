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
    bool hasCycle(ListNode *head) {
        if (head==NULL)return 0;
        if(head->next==nullptr)return 0;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr){
            slow= slow->next;
            if(fast->next!=nullptr)fast = fast->next->next;
            else break;
            if(slow==fast) return 1;
        }
        return 0;
    }
};
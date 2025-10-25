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
        ListNode* temp = head;
        ListNode* prev = head;
         int count =0;
        while(temp){
            count++;
            temp = temp->next;
        }
        int i=0;
        temp = head;
        if (count ==n){
            ListNode * temp1 = head;
            head = head->next;
        delete temp1;
        return head;
        }
        while(i!=count-n){
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};
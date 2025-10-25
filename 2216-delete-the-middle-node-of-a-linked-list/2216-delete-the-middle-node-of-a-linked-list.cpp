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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = head;
        int count = 0;
        while(temp){
            count++;
            temp = temp->next;
        }
        if (count==1) {
            head = NULL;
            return head;
        }
        temp = head;
        int i=0;
        while(i!= count/2){
            prev = temp;
            temp =temp->next;
            i++;
        }
        prev ->next = temp->next;
        delete temp;
        return head;
    }
};
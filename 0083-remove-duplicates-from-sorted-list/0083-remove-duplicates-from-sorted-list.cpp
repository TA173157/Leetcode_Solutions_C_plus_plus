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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)return head;
        if(head->next==NULL)return head;
        ListNode * temp = head;
       
        while(temp->next){
          if(temp->val==temp->next->val){
            ListNode* temp1= temp->next;
            if(temp1->next==nullptr){
                temp->next = NULL;
                delete temp1;
                return head;
            }
           else{ temp->next = temp1->next;
            delete temp1;}
          }
      else  temp = temp->next;
        }
        return head;
    }
};
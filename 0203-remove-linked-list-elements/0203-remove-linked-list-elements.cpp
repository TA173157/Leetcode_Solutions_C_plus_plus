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
    ListNode* removeElements(ListNode* head, int value) {
        ListNode* temp = head;
        ListNode* prev = temp;
        if(head==nullptr)return head;
        //  temp =temp->next;
        while(temp!=nullptr){
            if(head->val==value){
                ListNode* temp1 = head;
                head = head->next;
                temp =head;
                delete temp1;
            }
          else{ 
            // if ( temp==nullptr)return head;
            if(temp->val==value){
                ListNode* temp1=temp;
               temp= temp->next;
               prev->next= temp;
               delete temp1;
            }
            else{ prev = temp;
            temp =temp->next;}}
        }
        return head;
    }
};
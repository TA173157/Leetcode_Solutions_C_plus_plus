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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        ListNode * temp = head;
       vector <int> array;
       while(temp){
           array.push_back(temp->val);
           temp= temp->next;
       }
       temp = head;int b = array.size()-1;
       while(temp){
           temp->val = array[b];
           temp=temp->next;
           b--;
       }
       return head;
    }
};
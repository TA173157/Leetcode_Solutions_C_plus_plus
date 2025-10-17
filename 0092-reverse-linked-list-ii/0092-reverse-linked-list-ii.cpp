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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* top = head;
        ListNode* rear = head;
        vector <int> array;
       for(int i=1;i<left;i++){
           top = top->next;
       }
       for(int i=1;i<right;i++){
           rear = rear->next;
       }
       while(top!=rear->next){
           array.push_back(top->val);
           top = top->next;
       }
       top = rear = head;int b = array.size()-1;
        for(int i=1;i<left;i++){
           top = top->next;
       }
        for(int i=0;i<=right-left;i++){
           top->val = array[b];
           top=top->next;
           b--;
       }
        return head;
    }
};
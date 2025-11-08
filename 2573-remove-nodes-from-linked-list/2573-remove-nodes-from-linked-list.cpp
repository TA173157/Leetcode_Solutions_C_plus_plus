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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        
    while(head){
       v.push_back(head->val);
       head = head->next;
    };
    
   int end = v.size()-1;
 while(end>0){
    int len = max(v[end],v[end-1]);
    if(len>v[end-1]){
        v.erase(v.begin()+end-1);
        end--;
    }
    else end--;
 }
   int size = v.size()-1;int i=1;
    ListNode* head1= new ListNode(v[0]);
     ListNode * temp1 = head1;
   while(i<=size){
  ListNode *temp2=  new ListNode(v[i]);
    temp1->next = temp2;
    temp1 = temp2;
    i++;
   }
   return head1;
    }
};
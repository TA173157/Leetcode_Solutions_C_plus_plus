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
        ListNode * temp = head;
    while(temp){
       v.push_back(temp->val);
       temp = temp->next;
    };
    temp =head;
   int start =0,end=v.size()-1;
   while(start<end){
    if(v[start]<v[end]){
        v.erase(v.begin()+start);
        end--;
    }
    else{
        if(v[end]>v[end-1]){
            v.erase(v.begin()+end-1);
            end--;
        }
        else end--;
    }
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
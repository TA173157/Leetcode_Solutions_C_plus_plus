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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> array;int a=0 ,b=0,c=0,carry=0,d=0;
        while(l1!=nullptr || l2!=nullptr){
    
              b  = (l1 != nullptr) ? l1->val : 0;
       a  = (l2 != nullptr) ? l2->val : 0;
        
           int sum = a + b + carry;
            array.push_back(sum % 10);
            carry = sum / 10;
          if(l2)  l2 =  l2->next;
            if(l1) l1 =  l1->next;
        }
        if(carry>0){
            array.push_back(carry);
        }
        c = array.size();
        ListNode* head ;
        head = new ListNode(array[0]);
        ListNode* temp = head ;
        for(int i=1;i<c;i++){
        ListNode* temp1 =new ListNode(array[i]) ;
            temp->next = temp1;
            temp = temp1;
        }
        return head;
    }
};
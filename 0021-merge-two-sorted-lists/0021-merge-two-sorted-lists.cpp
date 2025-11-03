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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr &&list2==nullptr)return nullptr;
        vector<int> list;
        while(list1!=nullptr){
            list.push_back(list1->val);
           list1= list1->next;
        }
        while(list2!=nullptr){
            list.push_back(list2->val);
           list2= list2->next;
        }
       sort(list.begin(),list.end());
       ListNode * head = new ListNode(list[0]);
       ListNode * temp = head;
       for(int i=1;i<list.size();i++){
        ListNode * temp1 = new ListNode(list[i]);
        temp->next = temp1;
        temp = temp1;
       }
       return head;

    }
};
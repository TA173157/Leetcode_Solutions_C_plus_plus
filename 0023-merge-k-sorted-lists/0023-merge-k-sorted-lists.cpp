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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       int size = lists.size();
    //    if(size==0)return NULL;
    //    if(size==1&&lists[0]==NULL)return NULL;
    int j = 0; vector <int> array;
    for (int i=0; i<size; i++) {
        ListNode *head = lists [i];
        if(head==NULL)continue;
        ListNode *temp = head;
        while (temp!=nullptr) {
            array.push_back (temp->val);
            temp = temp ->next;}
    }
    if(array.empty())return NULL;
    sort(array.begin(), array.end());
    int size1 = array.size ();
    ListNode *head=new ListNode (array[0]);
    ListNode *temp = head;
    for(int i = 1; i < size1; i++) {
        ListNode *temp1 = new ListNode(array[i]);
        temp->next = temp1;
        temp = temp1;
    }
return head;
    }
};
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
    ListNode* sortList(ListNode* head) {
        if (head ==NULL)return NULL;
        if (head->next ==NULL)return head;
        ListNode* temp = head;
        vector <int> hey;
        while(temp){
            hey.push_back(temp->val);
            temp= temp->next;
        }
        sort(hey.begin(),hey.end());
        temp = head; int i=0;
        while(temp){
            temp->val = hey[i];
            i++;
            temp= temp->next;
        }
        return head;
    }
};
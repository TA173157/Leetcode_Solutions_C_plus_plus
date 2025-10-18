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
    int pairSum(ListNode* head) {
        vector<int>a,b;
        while(head){
            a.push_back(head->val);
            head = head->next;
        }
        int size = a.size();
        for(int i=0;i<size/2;i++){
            b.push_back(a[i]+a[size-1-i]);
        }
       sort(b.begin(),b.end());
        return b[size/2-1];
    }
};
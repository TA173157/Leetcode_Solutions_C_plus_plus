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
    bool isPalindrome(ListNode* head) {
        	vector <int> a,b; int k=0,flag;
        	ListNode* temp = head;
        	ListNode* temp1 = head;
            int count=0;
            while(temp1){
                count++;
                temp1=temp1->next;
            }
	ListNode* sec ;
	for(int i=0; i<count; i++) {
		if(i<count/2) {
			a.push_back(temp->val);
		}
		else if(i==(count/2)+1 && count%2!=0) {
			a.push_back(temp->val);
			b.insert(b.begin(),temp->val);
		}
		else {
			b.insert(b.begin(),temp->val);
		}
		temp= temp->next;
	}
	while(k!=(count/2)) {
		if(a[k]!=b[k]) {
			
			flag=0;
			break;
		}
		flag=1;
		k++;
	}
	if(flag==1){
        return 1;
    }
    return 0;
    }
};
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
vector <int> array;
    Solution(ListNode* head) {
        ListNode * temp = head;
        while(temp){
            array.push_back(temp->val);
            temp = temp->next;
        }
     
    }
    
    int getRandom() {
        int a = array.size();
        random_device rd;
    mt19937 gen(rd()); 
    uniform_int_distribution<> distr(0,a-1 ); 
    int times = distr(gen);
   
    return array[times];

    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
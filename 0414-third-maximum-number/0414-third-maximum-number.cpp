class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> num;
        for(int n : nums){
            num.insert(n);}
        if(num.size()<3)return *num.rbegin();
        else {
            auto it = num.rbegin();
            advance(it,2);
            return *it;
        }
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> present;
        for(int num : nums){
            if(num>0){
                present.insert(num);
            }
        }
        if(present.empty())return 1;
        for(int i=1;i<=present.size();i++){
            if(present.count(i)){}
            else return i;
        }
        return *present.end()+1;
    }
};
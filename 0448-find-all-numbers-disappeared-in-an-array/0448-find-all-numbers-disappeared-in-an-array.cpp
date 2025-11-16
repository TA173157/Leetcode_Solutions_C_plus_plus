class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>num;
        for(int a : nums){
            num.insert(a);
        }
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            
            if(!num.count(i+1)) result.push_back(i+1);
        }
        return result;
    }
};
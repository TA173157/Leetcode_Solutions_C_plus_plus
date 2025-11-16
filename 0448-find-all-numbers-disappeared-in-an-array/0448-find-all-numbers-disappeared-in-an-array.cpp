class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>num;
        for(int a : nums){
            num.insert(a);
        }
        int size = nums.size();
        // vector<int>result;
        nums.clear();
        for(int i=0;i<size;i++){
            
            if(!num.count(i+1)) nums.push_back(i+1);
        }
        return nums;
    }
};
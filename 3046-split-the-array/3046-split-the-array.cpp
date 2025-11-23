class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count =1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])count++;
            else if(nums[i]!=nums[i+1])count=1;
            if(count==3)return 0;
        }
        return 1;
    }
};
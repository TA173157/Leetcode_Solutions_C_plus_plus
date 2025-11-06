class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left =0, len=0;
        while(left<nums.size()){
            len += nums[left];
            left+=2;
        }
        return len;
    }
};
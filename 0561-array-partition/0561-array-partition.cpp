class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left =0, right=0,len=0;
        while(right<nums.size()){
            len += min(nums[left],nums[right]);
            left+=2;
            right+=2;
        }
        return len;
    }
};
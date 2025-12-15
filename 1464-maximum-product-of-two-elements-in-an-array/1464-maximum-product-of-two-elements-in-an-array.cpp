class Solution {
public:
    int maxProduct(vector<int>& nums) {
        for(int i=0;i<2;i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]);
            }
        }
        return (nums[nums.size()-1]-1)* (nums[nums.size()-2]-1);
    }
};
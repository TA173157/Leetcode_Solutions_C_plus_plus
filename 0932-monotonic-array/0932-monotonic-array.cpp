class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       if(nums.size()==1)return 1;
        int left =0; int right =1;int count_inc=0,count_dec=0;
        while(right<nums.size()){
            if(nums[right]==nums[left]){
                left++ ; right++ ; continue;
            }
            if(nums[right]>nums[left])count_inc++;
            else if(nums[right]<nums[left])count_dec++;
            else return 0;
            left++;right++;
        }
    if(count_inc!=0&& count_dec!=0)return 0;
    else return 1;
    }
};
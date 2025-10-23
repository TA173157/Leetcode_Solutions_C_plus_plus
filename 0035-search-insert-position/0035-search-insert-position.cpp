class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left =0,mid,prev;
        int right = nums.size()-1;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                right = mid-1;
                prev = right;
            }
            else left = mid+1;
            prev = left;
        }
        return prev;
    }
};
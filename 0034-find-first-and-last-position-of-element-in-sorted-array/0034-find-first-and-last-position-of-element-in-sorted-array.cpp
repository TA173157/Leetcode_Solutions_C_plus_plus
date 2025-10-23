class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last =-1;
        int right = nums.size()-1;
        int left = 0,mid;
        if(nums.size()==0){
            return {-1,-1};
        }
        while(left<=right){
             mid =left+(right-left)/2;
            if(nums[mid]==target){
                first =mid;
                right = mid-1;
            }
            else if(nums[mid]>target) right = mid-1;
            else  left = mid+1;

        }
        left =0; right = nums.size()-1;
        while(left <=right){
         mid =(left+right)/2;
            if(nums[mid]==target){
                last =mid;
                left = mid+1;
            }
            else if(nums[mid]>target) right = mid-1;
            else  left = mid+1;  
        }
        vector <int>a(2);
        a[0]=first;a[1]=last;
        return a;
    }
};
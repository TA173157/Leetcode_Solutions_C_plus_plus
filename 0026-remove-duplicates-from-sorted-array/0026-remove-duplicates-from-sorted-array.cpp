class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = nums.size()-1,count=1,b;
        for(int i=0;a>i;i++){
            if(nums[i]!=nums[i+1]){
                b=nums[i+1];
                nums[count]=b;
                count++;
            }
        }
        return count;
    }
};
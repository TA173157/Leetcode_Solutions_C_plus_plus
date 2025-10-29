class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
  if(nums.size()==1)return nums[0];
    int count =0; int value=0;
    for(int i=0;i<nums.size();i++){
       if(value==nums[i])count++;
    else  if(count==0){
        value = nums[i];
        count++;
      }
      else count--;
    }
    return value;
    }
};
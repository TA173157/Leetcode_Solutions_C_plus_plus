class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
  if(nums.size()==1)return nums[0];
    int count =1;long int value;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(count>nums.size()/2) break;
       else if(( int)nums[i]==( int)nums[i+1]) {count++;
      value = nums[i]; }
        else count=1;
    }
    return value;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
  long  int size = nums.size();
  if(size==1)return nums[0];
  long  int count =1;long int value;
    sort(nums.begin(),nums.end());
    for(int i=0;i<size-1;i++){
        if(count>size/2) break;
       else if((long int)nums[i]==(long int)nums[i+1]) {count++;
      value = nums[i]; }
        else count=1;
    }
    return value;
    }
};
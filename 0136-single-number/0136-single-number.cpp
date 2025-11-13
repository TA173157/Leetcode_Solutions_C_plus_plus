class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int start = 0 , end =1;
        while(end<nums.size()){
            if(nums[start]==nums[end]){
                nums[start]=30001;
                nums[end]=30001;
                if(start==end-1) {start+=2;
                    end = start+1;
                }
               else{ start++; end = start+1;}
            }
            else end++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==30001)continue;
            else return nums[i];
        }
       return 0; 
    }
};
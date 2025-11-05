class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>missing;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=1+nums[i]) {
                int value = nums[i]+1;
                while(value!=nums[i+1]){
                missing.push_back(value);
                value++;   
                }
            }

        }
        return missing;
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=1;
        for(int i=0;i<nums.size();i++){
            if(maxi<nums[i])maxi=nums[i];
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi)continue;
            int c = maxi - nums[i];
            sum+=c;
        }
        return sum;
    }
};
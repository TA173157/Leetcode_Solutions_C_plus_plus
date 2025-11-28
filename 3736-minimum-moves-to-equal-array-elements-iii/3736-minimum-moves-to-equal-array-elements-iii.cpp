class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = nums[nums.size()-1];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi)continue;
            int c = maxi - nums[i];
            sum+=c;
        }
        return sum;
    }
};
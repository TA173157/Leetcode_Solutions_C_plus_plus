class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=1;i<=1000;i++){
            if(nums[0]%i==0 && nums[nums.size()-1]%i==0){
                ans= i;
            }
        }
        return ans;
    }
};
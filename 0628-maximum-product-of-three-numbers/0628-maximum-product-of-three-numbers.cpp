class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0)count++;
    }
    if(count==0){
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[0]*nums[1]*nums[2];
    }
    else if(count<=2){
        sort(nums.begin(),nums.end());
        return nums[0]*nums[1]*nums[nums.size()-1];
    }
    else {
        for(int i=0;i<2;i++){
            for(int j=nums.size()-1;j>0;j--){
                if(abs(nums[j])>abs(nums[j-1]))swap(nums[j],nums[j-1]);
            }
        }
        int first = nums[0];
        int sec = nums[1];int maxi=-1000000000;
        for(int i=nums.size()-1;i>1;i--){
            maxi = max(maxi,first*sec*nums[i]);
        }
        return maxi;
    }
    }
};
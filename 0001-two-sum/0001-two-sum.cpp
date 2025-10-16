class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int vector_length = nums.size();
        int a ,b;
        for(int i=0;i<vector_length;i++){
            a=i+1;
            while(a!=vector_length){
                b= nums[i]+nums[a];
                if(b==target){
                    return {i,a};
                }
                a++;
            }
        
        }
        return{};
        }
    
};
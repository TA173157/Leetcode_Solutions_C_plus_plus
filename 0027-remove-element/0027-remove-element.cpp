class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector <int>array;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val) array.push_back(nums[i]) ;
           
        }
        int k = array.size();
       nums = array;
        return k;
    }
};
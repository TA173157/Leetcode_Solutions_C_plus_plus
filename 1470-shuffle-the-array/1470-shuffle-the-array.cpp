class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> array;
        int m=n;
        for(int i=0;i<n;i++){
                array.push_back(nums[i]);
                array.push_back(nums[m]);
                m++;
            
        }
        return array;
    }
};
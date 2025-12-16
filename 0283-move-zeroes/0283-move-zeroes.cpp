class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        
        // Scan the array once
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // If we find a non-zero, swap it with the element at our 'marker'
                swap(nums[lastNonZeroFoundAt], nums[i]);
                lastNonZeroFoundAt++;
            }
        }
    }
};
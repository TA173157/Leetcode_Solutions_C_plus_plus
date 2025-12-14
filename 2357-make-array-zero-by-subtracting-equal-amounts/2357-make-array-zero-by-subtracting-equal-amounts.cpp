class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // Use a set to automatically count unique positive elements
        std::set<int> distinct_positives;
        for (int num : nums) {
            if (num > 0) {
                distinct_positives.insert(num);
            }
        }
        return distinct_positives.size();

        /*
        // Alternative using sorting and counting
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            // Count unique positive elements
            if (nums[i] > 0 && (i == 0 || nums[i] != nums[i-1])) {
                count++;
            }
        }
        return count;
        */
    }
};
class Solution {
public:
    int findShortestSubArray(std::vector<int>& nums) {
        // Map to store frequency of each number
        std::unordered_map<int, int> freq;
        
        // Map to store the index of the first occurrence
        std::unordered_map<int, int> first_occurrence;
        
        // Map to store the index of the last occurrence
        std::unordered_map<int, int> last_occurrence;

        int degree = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];

            // 1. Track first occurrence
            if (first_occurrence.find(num) == first_occurrence.end()) {
                first_occurrence[num] = i;
            }

            // 2. Track last occurrence
            last_occurrence[num] = i; // Will always be updated to the current index

            // 3. Track frequency and update the maximum degree
            freq[num]++;
            degree = std::max(degree, freq[num]);
        }

        int min_length = INT_MAX;

        // Iterate through all numbers in the frequency map
        for (auto const& [num, count] : freq) {
            // Check only the numbers whose frequency is equal to the degree
            if (count == degree) {
                // Calculate the length of the subarray: last_index - first_index + 1
                int current_length = last_occurrence[num] - first_occurrence[num] + 1;
                
                // Update the minimum length
                min_length = std::min(min_length, current_length);
            }
        }

        return min_length;
    }
};
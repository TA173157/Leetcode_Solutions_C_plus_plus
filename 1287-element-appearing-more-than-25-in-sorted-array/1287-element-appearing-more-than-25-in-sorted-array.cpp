class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int n = arr.size();
        int required_count = n / 4; 
        for (int i = 0; i < n - required_count; ++i) {
            if (arr[i] == arr[i + required_count]) {
                return arr[i];
            }
        }
        return arr[0];
    }
};
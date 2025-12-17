class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;

        // 1. Climb up
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        // 2. Peak check: Peak cannot be the first or last element
        if (i == 0 || i == n - 1) {
            return false;
        }

        // 3. Walk down
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        // 4. If we reached the end, it's a valid mountain
        return i == n - 1;
    }
};
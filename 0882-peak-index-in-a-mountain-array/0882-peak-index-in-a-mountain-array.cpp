class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int right= arr.size()-1;
        int left =0,mid;
        while (left<=right){
            mid = (right+left)/2;
            if(arr[mid+1]<arr[mid] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid+1]) right= mid-1;
            else left = mid+1;
        }
        return 0;
    }
};
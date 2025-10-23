class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j = 0; vector <int>array;
        for(int i=1;i<=2000;i++){
            if (j<arr.size() && i==arr[j]){
                j++; 
            }
           else{ array.push_back(i);}
        }
        return array[k-1];
    }
};
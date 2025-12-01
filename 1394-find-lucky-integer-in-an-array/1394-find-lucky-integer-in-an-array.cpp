class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans[501];
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]+=1;
        }
        int result =-1;
        for(int i=1;i<501;i++){
            if(ans[i]==i){
                result =i;
            }
        }
    return result;
    }
};
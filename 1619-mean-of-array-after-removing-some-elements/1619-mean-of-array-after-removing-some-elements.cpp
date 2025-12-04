class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int percent = arr.size()*5/100;
        double sum=0;
        for(int i=percent;i<arr.size()-percent;i++){
            sum+=arr[i];
        }
        double a= sum/(arr.size()-(2*percent));
        return a;
    }
};
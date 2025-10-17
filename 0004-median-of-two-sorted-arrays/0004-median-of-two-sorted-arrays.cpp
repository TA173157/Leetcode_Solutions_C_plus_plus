class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> num3;
        int a = nums1.size();
        int b = nums2.size();
        for(int i=0;i<a+b;i++){
            if(i<a){
                num3.push_back(nums1[i]);
            }
            else{
             num3.push_back(nums2[i-a]);

            }
        }
        sort(num3.begin(), num3.end());
        int d= num3.size();
        if(d==0) return 0.0;
        int c =num3.size()%2;
         double e;
        if(c==0){
             e = (num3[d/2]+num3[(d/2)-1])/2.0;
            return e;
        }
        else{
            e = num3[d/2];
            return e;
        }
    }
};
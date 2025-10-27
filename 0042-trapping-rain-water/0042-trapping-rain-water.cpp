class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        if(size<3) return 0;
     vector <int> leftmax(size),rightmax(size);
     leftmax[0]=0;
     for(int i=1;i<size;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
     }
     rightmax[size-1]=0;
     for(int i=size-2;i>=0;i--){
        rightmax[i] = max(rightmax[i+1],height[i+1]);
     }
     int water =0;
     for(int i=0;i<size;i++){
        int minh = min(leftmax[i],rightmax[i]);
        if(minh-height[i]>0){
            water+=minh-height[i];
        }
     }
     return water;
    }
};
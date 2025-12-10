class Solution {
public:
    int maxArea(vector<int>& height) {
       int area = 0, maxi=0;
       int right =0, left =height.size()-1;
       for(int i=0;i<height.size();i++){
        maxi = min(height[right],height[left]);
        area = max(maxi * (left-right),area);
        if(height[right]>height[left])left--;
        else if(height[right]<height[left])right++;
        else {right++;left--;}
        if(left<=right)break;
       }
       return area;
    }
};
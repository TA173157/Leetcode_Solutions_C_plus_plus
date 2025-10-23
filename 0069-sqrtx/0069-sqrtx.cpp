class Solution {
public:
    int mySqrt(int x) {
long int left =0; long int right = x;
long int mid,prev;
while(left<=right){
    mid = (left+right)/2;
    if(mid*mid==x) return mid;
    else if(mid*mid>x){
        right = mid-1;
        prev = right;
    }
    else {
    prev = left;
        left = mid+1;
    }
    

    }
    return prev;
    }
};
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0)return false;
        if(n==1)return true;
        int log_2 = (log(n)/log(2))+1;
        if((n&((long int)n-1))==0 && log_2%2==1)return true;
        return false;
    }
};
class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        int a = 1, b=0,sum=0;
        for(int i=1;i<n;i++){
            sum=a+b;
            b= a;
            a = sum;
        }
        return sum;
    }
};
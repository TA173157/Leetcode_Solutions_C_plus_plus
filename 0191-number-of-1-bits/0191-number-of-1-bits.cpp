class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
       while(n!=0){
        int c =n%2;
        if(c==1)count++;
        n/=2;
       } 
       return count;
    }
};
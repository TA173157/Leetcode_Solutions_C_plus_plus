class Solution {
public:
    int addDigits(int num) {
        int b,sum=0;
 while(num/10!=0){   while(num!=0)  {b=num%10;
      num/=10;
      sum+=b;}
      num= sum;
      sum=0;
      } 
      return num;
    }
};
class Solution {
public:
    int reverse(int x) {
         int b;long int sum=0 ;
   while(x){
    b = x%10 ;
    x/=10;
    sum = (sum*10)+b;
    
   }
    if (sum > numeric_limits<int>::max()) {
        return 0;
    }

    if (sum < numeric_limits<int>::min()) {
        return 0;
    }
   return sum;
    }
};
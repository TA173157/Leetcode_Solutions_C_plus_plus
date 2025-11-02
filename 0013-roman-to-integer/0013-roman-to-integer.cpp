class Solution {
public:
  int getValue(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // Should not happen with valid input
    }
}
    int romanToInt(string s) {
     int num=0,prev=1000,sum=0;
        for(int i=0;i<s.size();i++){
           num= getValue(s[i]);
            if(num>prev) {
            sum+=num-2*prev;}
           else{sum+= num;}
           prev = num;
        }
        return sum;
    }
};
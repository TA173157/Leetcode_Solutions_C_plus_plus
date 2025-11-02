class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman; int num=0,prev=1000,sum=0;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
        for(int i=0;i<s.size();i++){
           num= roman[s[i]];
            if(num>prev) {sum-=prev;
            sum+=num-prev;}
           else{sum+= num;}
           prev = num;
        }
        return sum;
    }
};
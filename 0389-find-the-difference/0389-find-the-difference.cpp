class Solution {
public:
    char findTheDifference(string s, string t) {
     int sum1=0; 
    int sum2=0; 
    for( char character : s){
        sum1+= character-'a';
    }
    for( char character : t){
        sum2+= character-'a';
    }
    sum2-=sum1;
      return 'a'+sum2;
    }
};
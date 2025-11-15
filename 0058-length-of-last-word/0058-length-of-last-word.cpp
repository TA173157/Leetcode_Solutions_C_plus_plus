class Solution {
public:
    int lengthOfLastWord(string s) {
        string a="",b="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                if(b.size()!=0) return b.size();
                a="";continue;
            }
            else {a=s[i]+a;b=a; }
        }
        return b.size();
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        string a="",b="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                a="";continue;
            }
            else {a+=s[i];b=a; }
        }
        return b.size();
    }
};
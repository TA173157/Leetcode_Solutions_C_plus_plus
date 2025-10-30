class Solution {
public:
    string defangIPaddr(string s) {
        string t ="";
         for(int i=0;i<s.size();i++){
      if(s[i]=='.'){
          t = t+"[.]";
      }
      else{t =t+s[i];}
  }
  return t;
    }
};
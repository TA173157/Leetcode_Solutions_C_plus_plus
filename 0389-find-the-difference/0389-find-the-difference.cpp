class Solution {
public:
    char findTheDifference(string s, string t) {
      while(s.size()!=0){
        char c = s[s.size()-1];
        for(int i=0;i<t.size();i++){
            if(t[i]==c){
                t.erase(t.begin()+i);
                s.pop_back();
                break;
            }
        }
      }
      return t[0];
    }
};
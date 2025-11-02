class Solution {
public:
    string sortVowels(string s) {
        if(s.size()==1)return s;
        set<char> target_chars = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};
        vector<char>lower_char;
        
        int i=0;
   for (const char& c : s) {
        if (target_chars.count(c)) {
            lower_char.push_back(c) ;s[i]='#'; 
        }
        i++;
    } 
    i=0;int k=0;
    sort(lower_char.begin(),lower_char.end());
   
       while( s.size()>i){
       if(s[i]=='#'){s[i]= lower_char[k];k++;}
        i++;
       }
       return s;
    }
};
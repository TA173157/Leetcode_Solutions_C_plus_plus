class Solution {
public:
    string sortVowels(string s) {
        if(s.size()==1)return s;
        set<char> target_chars = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};
        vector<char>lower_char;
        vector<int>lower;
        int i=0;
   for (const char& c : s) {
        if (target_chars.count(c)) {
            lower_char.push_back(c) ;lower.push_back(i); 
        }
        i++;
    } 
    i=0;
    sort(lower_char.begin(),lower_char.end());
   
       while( lower_char.size()>i){
       
        s[lower[i]]= lower_char[i];
        i++;
       }
       return s;
    }
};
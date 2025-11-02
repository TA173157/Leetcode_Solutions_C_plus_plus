class Solution {
public:
    string sortVowels(string s) {
        if(s.size()==1)return s;
        set<char> target_chars = {'a', 'e', 'i', 'o', 'u'};
        set<char> target_chars1 = {'A', 'E', 'I', 'O', 'U'};
        vector<int>lower;
        vector<char>lower_char;
        int i=0;
   for (const char& c : s) {
        if (target_chars.count(c)||target_chars1.count(c)) {
            lower.push_back(i) ; lower_char.push_back(c);
        }
        i++;
    } 
    i=0;
    sort(lower_char.begin(),lower_char.end());
    int larger = lower.size();
       while(larger>i){
        s[lower[i]]= lower_char[i];
        i++;
       }
       return s;
    }
};
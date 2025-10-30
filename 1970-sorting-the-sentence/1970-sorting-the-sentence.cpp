class Solution {
public:
    string sortSentence(string s) {
        vector<string>array(9);
        string temp=""; int count=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]==' '||s[i]=='\0'){
                int num = s[i-1]-'1';
                temp.pop_back();
                array[num]= temp;
                temp="";
                count++;
                continue;
            }
            temp+=s[i];
        } 
        temp="";
        for(int i=0;i<count;i++){
            temp+=array[i]+" ";
        }
        // temp+= '"';
 temp.pop_back();
 return temp;
    }
};
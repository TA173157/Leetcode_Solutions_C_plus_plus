class Solution {
public:
    bool checkIfPangram(string s) {
        if (s.size()<26) return 0;
        vector <int> present(26,0);
        for(int i=0;i<s.size();i++){
            int j = s[i]-'a';
            present[j]=1;
        }
        sort(present.begin(),present.end());
        if(present[0]==0)return 0;
        else return 1;
    }
};
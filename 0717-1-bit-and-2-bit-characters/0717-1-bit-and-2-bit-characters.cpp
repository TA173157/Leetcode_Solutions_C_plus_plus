class Solution {
public:
    bool isOneBitCharacter(vector<int>& b) {
        if(b.size()==1)return 1;
        int i=0;
        while(i<b.size()){
         if(i==b.size()-1&&b[i]==0)return 1;
        else if(b[i]==1)i+=2;
            else if(b[i]==0)i++;
        }
        return 0;
    }
};
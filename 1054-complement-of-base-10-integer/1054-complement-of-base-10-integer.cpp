class Solution {
public:
    int bitwiseComplement(int n) {
        vector <int> array;
        vector <int> array1;
        if (n==0)return 1;
        while(n!=0){
            int b = n%2;
            n/=2;
            array.push_back(b);
        }
        for(int i=0;array.size()>i;i++){
            if(array[i]==0){
                array1.push_back(1);
            }
            else array1.push_back(0);
        }
        array.clear();
        int sum =0;
        for(int i=0;array1.size()>i;i++){
            sum += array1[i]*pow(2,i);
        }
        return sum;
    }
};
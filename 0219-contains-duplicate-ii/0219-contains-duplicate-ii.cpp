class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> number;
        for(int i=0;i<nums.size();i++){
            number.push_back({nums[i],i});
        }
        sort(number.begin(),number.end());
        for(int i=0;i<nums.size()-1;i++){
           if(number[i].first==number[i+1].first){
            if(abs(number[i].second-number[i+1].second)<=k)return 1;
           }
        }
        return 0;
    }
};
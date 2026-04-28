class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res,cnt = 0;
        map<int,int> mp;
        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second > cnt){
                cnt = it.second;
                res= it.first;
            }
        }
        return res;
    }
};
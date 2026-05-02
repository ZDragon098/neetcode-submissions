class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int Max = 0;
        unordered_set<int> se;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                se.insert(nums[i]);
                Max = max(Max,nums[i]);
            }
        }
        for(int i = 1; i<= Max+1; i++){
            if(!se.count(i)) return i;
        }
    }
};
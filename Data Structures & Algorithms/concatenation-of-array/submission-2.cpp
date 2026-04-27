class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size() * 2;
        vector<int> ans(n);
        for(int i = 0; i < nums.size();i++){
            ans[i] = ans[i+nums.size()] = nums[i];
        }
        return ans;
    }
};
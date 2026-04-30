class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> a(nums.begin(),nums.end());
        int ans = 0;
        for (auto num : a){
            int cnt = 0, curr = num;
            while(a.find(curr) != a.end()){
                cnt++;
                curr++;
            }

            ans = max(ans, cnt);
        }
        return ans;
    }
};

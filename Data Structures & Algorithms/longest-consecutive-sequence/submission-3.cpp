class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> a(nums.begin(),nums.end());
        int ans = 0;
        for (auto num : a){
            if(a.find(num - 1) == a.end()){
                int l = 1, k = 1;
                while(a.find(num+k) != a.end()){
                    l++;
                    k++;
                }
                ans = max(ans, l);
            }
        }
        return ans;
    }
};

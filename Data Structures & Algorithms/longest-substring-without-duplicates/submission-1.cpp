class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, ans = 0;
        unordered_set<char> se;
        for(int r = 0; r < s.size(); r++){
            while(se.find(s[r]) != se.end()){
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            ans = max(ans,r - l + 1);
        }
        return ans;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return 0;
        int l = s.length();
        int cnt_s[50] = {0}, cnt_t[50]={0};
        for(int i = 0; i < l;i++){
            int k = s[i] - 'a';
            cnt_s[k]++;
        }
        for(int i = 0; i < l;i++){
            int k = t[i] - 'a';
            cnt_t[k]++;
        }

        for(int i = 0; i < 50;i++){
            if(cnt_s[i] != cnt_t[i]) return 0;
        }
        return 1;
    }
};

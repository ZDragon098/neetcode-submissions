class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(int i = 0; i < s.size();i++){
            s[i] = tolower(s[i]);
            if(('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i]<= '9')) res+=s[i];
        }
        int i = 0, j = res.size() - 1;
        //cout << res;
        while(i < j){
            if(res[i] != res[j]) return false;
            i++;j--;
        }
        return true;
    }
};

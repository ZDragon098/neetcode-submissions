class Solution {
public:
    bool first = 1;
    bool validPalindrome(string s) {
        int l = 0, r= s.size() -1;
        while(l < r){
            if(s[l] != s[r]){
                return check(s.substr(0,l) + s.substr(l+1)) ||
                        check(s.substr(0,r) + s.substr(r + 1));
            }
            l++;
            r--;
        }
        return true;
    }
private:
    bool check(string s){
        int l = 0, r = s.size() - 1;
        while(l < r){
            if(s[l] != s[r]) return false;
            l++;r--;
        }
        return true;
    }
};

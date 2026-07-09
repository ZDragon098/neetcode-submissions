class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
    int maxf = 0, res = 0, i = 0;
    for(int j = 0; j < s.size(); j++){

        mp[s[j]]++;
        maxf = max(maxf,mp[s[j]]);
        cout << maxf<<" "<<s[j]<<"\n";
        if(j - i + 1 - maxf <= k) res = max(res,j - i + 1);
        else{
            
            mp[s[i]]--;
            i++;
            //maxf = 0;
        }
    }
    return res;
    }
};

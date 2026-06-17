class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> cnt1;
        for(int i = 0; i < s1.size();i++){
            cnt1[s1[i]]++;
        }

        //map<char,int> check = permutation;
        int k = cnt1.size();
        for(int i = 0; i < s2.size(); i++){
            unordered_map<char,int> cnt2;
            int cur = 0;
            for(int j = i; j < s2.size(); j++){
                cnt2[s2[j]]++;
                
                if(cnt1[s2[j]] < cnt2[s2[j]]) break;

                if(cnt1[s2[j]] == cnt2[s2[j]]) cur++;

                if(cur == k) return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        bool check = true;
        string s="";
        while(i < strs[0].size() && check){
            for(int j = 0; j < strs.size() - 1; j++){
                if(i >= strs[j+1].size() || strs[j][i] !=  strs[j+1][i]){
                    check = false;
                    break;
                }
            }
            if(check){
                s += strs[0][i];
                i++;
            }
        }
        return s;
    }
};
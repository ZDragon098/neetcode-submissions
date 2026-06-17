class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = 100000;
        for(int i = 0; i < nums.size(); i++){
            int cnt = 0, total = 0;
            for(int j = i; j < nums.size(); j++){
                total+= nums[j];
                cnt++;
                if(total >= target){
                    ans = min(ans,cnt);
                    break;
                }
                
            }
        }
        return (ans == 100000 ? 0 : ans);
    }
};
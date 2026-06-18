class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> prefix(nums.size() + 1, 0);
        
        for(int i = 0; i < nums.size(); i++){
            prefix[i + 1] = prefix[i] + nums[i];
        }

        int ans = 1000000;
        for(int i = 0; i < nums.size(); i++){
            int l = i, r = nums.size();
            while(l < r){
                int mid = (l + r) / 2;
                int curSum = prefix[mid + 1] - prefix[i];
                if(curSum >= target){
                    r = mid;
                }
                else{
                    l = mid + 1;
                }
            }
            if(l != nums.size())
            ans = min(ans,l - i + 1);
        }
        return (ans == 1000000) ? 0: ans;
    }
};
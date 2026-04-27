class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k = 1, zerocnt = 0;
        for(int num: nums){
            if(num != 0){
                k*= num;
            }
            else zerocnt++;
        }

        if(zerocnt > 1){
            return vector<int>(nums.size(),0);
        }

        vector<int> res(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(zerocnt > 0){
                res[i] = (nums[i] == 0) ? k : 0;
            }
            else{
                res[i] = k/nums[i];
            }
        }
        return res;
    }

};

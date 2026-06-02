class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //if(target < nums[0]) return 0;
        //else if(target > nums[nums.size()-1]) return nums.size();
        int l = 0, ans,r = nums.size() - 1;
        while(l <= r){
            int m = (l + r) / 2;
            if(nums[m] < target){
                l = m + 1;
            }
            else r = m - 1;
        }
        return l;
    }
};
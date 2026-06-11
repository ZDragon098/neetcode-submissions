class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() -1;

        while(l <= r){
            int m = (l + r) / 2;

            if(nums[m] == target) return true;

            if(nums[m] > nums[l]){
                if(target < nums[l]) l = m + 1;
                else if(target > nums[m]) l = m + 1;
                else r = m -1;
            }
            else if(nums[m] < nums[l]){
                if(target > nums[r]) r = m - 1;
                else if(target < nums[m]) r= m -1;
                else l = m + 1;
            }
            else{
                l++;
            }
        }
        return false;
    }
};
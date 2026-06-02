class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,target);
    }
private:
    int binarySearch(vector<int> a, int target){
        int l = 0, r = a.size() - 1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] == target) return mid;
            else if (a[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        return -1;
    }
};

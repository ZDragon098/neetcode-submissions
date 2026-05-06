class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                ans.push_back(i+1);ans.push_back(j+1);
                break;
            }
            else if(numbers[i] + numbers[j] < target) i++;
            else j--;
        }
         return ans;
    }
// private:
//     int binarySearch(vector<int> a, int l, int r, int x){
//         while(l < r){
//             int m = (l + r) / 2;
//             if(a[m] == x) return m;
//             else if(a[m] > x) r = m - 1;
//             else l = m + 1;
//         }
//         return -1;
//     }
};

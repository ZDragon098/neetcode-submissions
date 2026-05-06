class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                return {i+1,j+1};
            }
            else if(numbers[i] + numbers[j] < target) i++;
            else j--;
        }
         return {-1,-1};
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

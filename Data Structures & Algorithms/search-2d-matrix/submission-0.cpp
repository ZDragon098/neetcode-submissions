class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> a;
        for(int i = 0; i<matrix.size();i++){
            for(int j = 0; j < matrix[0].size();j++){
                a.push_back(matrix[i][j]);
            }
        }
        
        int l = 0, r = matrix.size() * matrix[0].size() - 1;
        while(l<=r){
            int m = (l + r) / 2;
            if(a[m] == target) return true;
            else if(a[m] > target) r = m - 1;
            else l = m+1;
        }
        return false;
    }
};

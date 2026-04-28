class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int h1 = 0, h2 = matrix.size()-1;
        int c1 = 0, c2 = matrix[0].size()-1;
        while(h1 <= h2 && c1 <= c2){
            for(int i = c1 ; i<= c2; i++){
                res.push_back(matrix[h1][i]);
            } h1++;

            for(int i = h1; i<= h2; i++){
                res.push_back(matrix[i][c2]);
            } c2--;

            if(h1 <= h2){
                for(int i = c2; i>= c1; i--){
                    res.push_back(matrix[h2][i]);
                } h2--;
            }

            if(c1 <= c2){
                for(int i = h2; i>= h1; i--){
                    res.push_back(matrix[i][c1]);
                }c1++;
            }
        }
        return res;
    }
};

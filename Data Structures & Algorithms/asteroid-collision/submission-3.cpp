class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        res.push_back(asteroids[0]);
        int i = 1;
        for(int i = 1; i< asteroids.size(); i++){
            int curr = asteroids[i];
            bool check = false;

            while(!res.empty() && res[res.size()-1] > 0 && curr < 0){
                if( abs(curr) > abs(res[res.size()-1]) ){
                    res.pop_back();
                }
                else if( abs(curr) == abs(res[res.size()-1])){
                    res.pop_back();
                    check = true;
                    break;
                }
                else{
                    check = true;
                    break;
                }
            }
            
            if(!check){
                res.push_back(curr);
            }
        }
        return res;
        
    }
};
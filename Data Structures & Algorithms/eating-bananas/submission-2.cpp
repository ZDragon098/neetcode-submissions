class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());

  
         int res = r;
        while(l <= r){
            int m = (l + r) / 2;
            int k = check(piles,m);
            if(k <= h){
                res = m;
                r = m - 1;
                
            }
            else{
                l = m + 1;
            }
        }
        return res;
    }
private:
    int check(vector<int> a, int m){
        int cnt = 0;
        for(int i = 0; i < a.size(); i++){
            while(a[i] >= m){
                cnt+= a[i] / m;
                a[i] = a[i] % m;
            }
            if(a[i] != 0 && a[i] < m) cnt+=1;
        }
        return cnt;
    }
};

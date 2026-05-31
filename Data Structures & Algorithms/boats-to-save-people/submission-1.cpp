class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l = 0, res = 0,r = people.size()-1;
        while(l<=r){
            int temp = limit - people[r--];
            res++;
            if(temp >= people[l]) l++;
        }
        return res;
    }
};
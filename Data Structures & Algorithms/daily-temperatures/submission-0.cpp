class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> stack;
        int n = temperatures.size();
        for(int i = 0; i < n; i++){
            bool check = true;
            for(int j = i + 1; j< n; j++){
                if(temperatures[j] > temperatures[i]){
                    stack.push_back(j - i);
                    check = false;
                    break;
                }
            }
            if(check) stack.push_back(0);
        }
        return stack;
    }
};

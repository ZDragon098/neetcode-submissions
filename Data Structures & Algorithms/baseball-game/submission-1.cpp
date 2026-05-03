class Solution {
public:
    int calPoints(vector<string>& operations) {
        long long sum = 0;
        vector<int> stack;
        for(int i = 0; i < operations.size();i++){
            if(operations[i] == "+"){
                int top = stack.back(); stack.pop_back();
                int newTop = stack.back() + top;
                stack.push_back(top);
                stack.push_back(newTop);
            }
            else if(operations[i] == "D"){
                stack.push_back(stack.back() * 2);
            }
            else if(operations[i] == "C"){
                stack.pop_back();
            }
            else stack.push_back(stoi(operations[i]));
        }
        for(int x: stack){
            sum+=x;
        }
        return sum;
        
    }
};
class Solution {
public:
    string decodeString(string s) {
    vector<string> stack;
    string res="";
    int open = 0;
    for(char c: s){
        if(c != ']'){
            stack.push_back(string(1,c));
        }
        if(c == '['){
            open++;
        }
        else if(c == ']' && open!=0){
            open-=1;
            string s;
            while(stack.back() != "["){
                s+= stack.back();
                stack.pop_back();
            }
            dao(s);
            stack.pop_back();

            string number="";
            while(!stack.empty() && "0" <= stack.back() && stack.back() <= "9"){
                number += stack.back();
                stack.pop_back();
            }
            dao(number);
            int cnt = stoi(number);

            while(cnt--){
                for(int i = 0; i < s.size();i++){
                     stack.push_back(string(1,s[i]));
                }
            }
        }
    }
    for(int i = 0; i < stack.size();i++){
        res+=stack[i];
    }
    return res;
}
    
private:
    void dao(string &s){
        int i = 0, j = s.size()-1;
        while(i < j){
            swap(s[i],s[j]);
            i++;j--;
        }
    }
};
class Solution {
public:
    bool isValid(string s){
        stack<char> stack;
        string open = "({[";
        string exit = ")}]";
        for(int i=0;i!=s.size();i++){
            if(open.find(s[i]) != std::string::npos){
                stack.push(s[i]);
            }
            if(exit.find(s[i]) != std::string::npos){
                if(stack.empty()){
                    return false;
                }
                else if((stack.top() == '(' and s[i] == ')') or 
                (stack.top() == '{' and s[i] == '}') or 
                (stack.top() == '[' and s[i] == ']')){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(not stack.empty()){
            return false;
        }
        return true;
    };
};

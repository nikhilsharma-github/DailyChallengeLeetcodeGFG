class Solution {
public:
    bool isValid(string s) {
        stack<char> cs;
        for(char c:s){
            if(c==']'||c=='}'||c==')'){

                if(cs.size()==0)
                return false;
                
                if(
                (cs.top()=='('&&c==')')||
                (cs.top()=='['&&c==']')||
                (cs.top()=='{'&&c=='}')){
                    cs.pop();
                }
                else{
                    return false;
                }
            }
            else if(c=='['||c=='{'||c=='('){
                cs.push(c);
            }            
        }

        if(cs.size()==0)
        return true;
        else
        return false;
    }
};
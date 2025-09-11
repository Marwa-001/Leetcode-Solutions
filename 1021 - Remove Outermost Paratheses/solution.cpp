
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans="";
        if(s.length()==0){
            return "";
        }

        for(int i=0; i<s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(st.size()==1 && s[i]==')' && st.top()=='('){
                st.pop();
            }
            else{
                if(st.top()=='(' && s[i]==')'){
                    ans+=s[i];
                    st.pop();
                }
                else{
                    st.push(s[i]);
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};

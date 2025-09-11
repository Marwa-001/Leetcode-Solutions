# LeetCode Problem 1021: Remove Outermost Parentheses

## Description
A valid parentheses string is either empty `""`, `"(" + A + ")"`, or `A + B`,  
where `A` and `B` are valid parentheses strings, and `+` represents string concatenation.  

For example, `"()()"` and `"(())()"` are valid, but `")("` and `"(()"` are not valid.  

Given a valid parentheses string `s`, split it into the primitive decomposition:  
- A primitive valid parentheses string is a non-empty valid parentheses string that cannot be split into smaller valid strings.  

Your task is to remove the outermost parentheses of every primitive string in the primitive decomposition of `s`.  

---

## Approach
- Use a **stack** to track the balance of parentheses.  
- Iterate through the string:  
  - When encountering `'('`, push it onto the stack.  
  - When encountering `')'`, pop from the stack.  
  - Append characters to the answer string **only when they are not the outermost parentheses**.  
- Return the built string.  

---

## Complexity Analysis
- **Time Complexity:** `O(n)` – each character is processed once.  
- **Space Complexity:** `O(n)` – stack can hold up to `n` characters in the worst case.  

---

## Solution
```cpp
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

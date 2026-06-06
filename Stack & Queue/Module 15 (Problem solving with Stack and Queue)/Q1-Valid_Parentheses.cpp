
/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
1.Open brackets must be closed by the same type of brackets.
2.Open brackets must be closed in the correct order.
3.Every close bracket has a corresponding open bracket of the same type.

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;s[i]!='\0';i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
                st.push(s[i]);
            } else {
                if(st.empty()) {
                    return false;
                } else {
                    if(s[i]==')' && st.top()=='(') {
                        st.pop();
                    } else if (s[i]=='}' && st.top()=='{') {
                        st.pop();
                    } else if(s[i]==']' && st.top()=='[') {
                        st.pop();
                    } else {
                        return false;
                    }
                } 
            }
        }
        if(st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};

/*
Given two strings s and t, return true if they are equal when both are typed into 
empty text editors. '#' means a backspace character.
Note that after backspacing an empty text, the text will continue empty.

Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

Example 3:
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        for(auto c : s) {
            if(c!='#') {
                st1.push(c);
            } else {
                if(!st1.empty()) {
                    st1.pop();
                }
            }
        }
        stack<char>st2;
        for(auto c : t) {
            if(c!='#') {
                st2.push(c);
            } else {
                if(!st2.empty()) {
                    st2.pop();
                }
            }
        }
        if(st1==st2) {
            return true;
        } else {
            return false;
        }
    }
};
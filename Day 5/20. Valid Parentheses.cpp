#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (!st.empty() && ((s[i] == ')' && st.top() == '(') || 
                                (s[i] == ']' && st.top() == '[') || 
                                (s[i] == '}' && st.top() == '{'))) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};

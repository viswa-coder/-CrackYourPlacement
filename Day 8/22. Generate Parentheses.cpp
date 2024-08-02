#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<string> res;

    void f(int open, int close, string current, int n) {
        if (current.length() == 2 * n) {
            res.push_back(current);
            return;
        }

        if (open < n) {
            f(open + 1, close, current + "(", n);
        }
        if (close < open) {
            f(open, close + 1, current + ")", n);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        f(0, 0, "", n);
        return res;
    }
};
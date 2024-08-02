#include<bits/stdc++.h>
using namespace std;

class Solution {
    struct node {
        string val;
        node* next;
        node(string v){
            val = v;
            next = nullptr;
        }
    };

public:
    string reverseWords(string s) {
        int n = s.size();
        node* dummy = new node("s");
        node* temp = dummy;

        for (int i = 0; i < n; ++i) {
            if (s[i] != ' ') {
                string word;
                while (i < n && s[i] != ' ') {
                    word += s[i];
                    i++;
                }
                node* str = new node(word);
                temp->next = str;
                temp = str;
            }
        }

        node *p = nullptr, *q = dummy->next, *r = nullptr;
        while (q != nullptr) {
            r = q->next;
            q->next = p;
            p = q;
            q = r;
        }

        string ans;
        q = p; // q is now pointing to the new head after reversal
        while (q != nullptr) {
            ans += q->val + " ";
            q = q->next;
        }

        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back(); // remove the trailing space
        }

        return ans;
    }
};
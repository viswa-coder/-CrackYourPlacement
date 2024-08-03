#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
public:
    ListNode* reverseList(ListNode* head) {
        if(head== NULL || head->next == NULL) return head;
        ListNode* p = head->next;
        ListNode* q = head;
        ListNode* r = NULL;

        while(p != NULL){
            q->next = r;
            r = q;
            q = p;
            p = p->next;
        }

        q->next = r;
        return q;

    }
};
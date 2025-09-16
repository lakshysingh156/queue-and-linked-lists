#include <bits/stdc++.h>
using namespace std;
struct Node { int d; Node *next; Node(int x): d(x), next(NULL) {} };
int main() {
    Node *head = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        Node *p = new Node(x);
        p->next = head;
        head = p;
    }
    Node *prev = NULL, *cur = head, *nxt;
    while (cur) {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    head = prev;
    for (Node *t = head; t; t = t->next) cout << t->d << " ";
}       

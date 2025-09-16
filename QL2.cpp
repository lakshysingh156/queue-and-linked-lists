#include <bits/stdc++.h>
using namespace std;
struct Node { int d; Node* next; Node(int x): d(x), next(NULL) {} };
int main() {
    Node *head = NULL;
    int n, x, key;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        Node *p = new Node(x);
        p->next = head;
        head = p;
    }
    cin >> key;
    int c = 0;
    while (head && head->d == key) { Node *t = head; head = head->next; delete t; c++; }
    Node *cur = head;
    while (cur && cur->next) {
        if (cur->next->d == key) { Node *t = cur->next; cur->next = t->next; delete t; c++; }
        else cur = cur->next;
    }
    cout << "Count: " << c << "\n";
    for (Node *t = head; t; t = t->next) cout << t->d << " ";
}

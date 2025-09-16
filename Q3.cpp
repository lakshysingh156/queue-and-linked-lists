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
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->d;
}

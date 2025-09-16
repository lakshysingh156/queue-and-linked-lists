#include <bits/stdc++.h>
using namespace std;
struct Node { int d; Node *next; Node(int x) : d(x), next(NULL) {} };
int main() {
    Node *head = NULL;
    int ch, x, val;
    while (true) {
        cout << "\n1 insBeg 2 insEnd 3 delBeg 4 delEnd 5 delVal 6 search 7 display 8 exit\n";
        cin >> ch;
        if (ch == 1) {
            cin >> x;
            Node *p = new Node(x);
            p->next = head;
            head = p;
        }
        else if (ch == 2) {
            cin >> x;
            Node *p = new Node(x);
            if (!head) head = p;
            else { Node *t = head; while (t->next) t = t->next; t->next = p; }
        }
        else if (ch == 3) {
            if (!head) cout << "Empty\n";
            else { Node *t = head; head = head->next; delete t; }
        }
        else if (ch == 4) {
            if (!head) cout << "Empty\n";
            else if (!head->next) { delete head; head = NULL; }
            else { Node *t = head; while (t->next->next) t = t->next; delete t->next; t->next = NULL; }
        }
        else if (ch == 5) {
            cin >> val;
            if (!head) cout << "Empty\n";
            else if (head->d == val) { Node *t = head; head = head->next; delete t; }
            else {
                Node *t = head;
                while (t->next && t->next->d != val) t = t->next;
                if (t->next) { Node *r = t->next; t->next = r->next; delete r; }
            }
        }
        else if (ch == 6) {
            cin >> val;
            int pos = 1;
            Node *t = head;
            while (t && t->d != val) { t = t->next; pos++; }
            cout << (t ? pos : -1) << "\n";
        }
        else if (ch == 7) {
            Node *t = head;
            while (t) { cout << t->d << " "; t = t->next; }
            cout << "\n";
        }
        else break;
    }
}

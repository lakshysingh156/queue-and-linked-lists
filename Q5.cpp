#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> q1, q2;
    int ch, x;
    while (true) {
        cout << "\n1 push 2 pop 3 exit\n";
        cin >> ch;
        if (ch == 1) {
            cin >> x;
            q2.push(x);
            while (!q1.empty()) { q2.push(q1.front()); q1.pop(); }
            swap(q1, q2);
        }
        else if (ch == 2) {
            if (q1.empty()) cout << "Empty\n";
            else { cout << q1.front() << "\n"; q1.pop(); }
        }
        else break;
    }
}

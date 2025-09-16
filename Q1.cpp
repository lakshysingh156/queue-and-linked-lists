#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> q;
    int ch, x;
    while (true) {
        cout << "\n1 enq 2 deq 3 empty 4 size 5 front 6 exit\n";
        cin >> ch;
        if (ch == 1) { cin >> x; q.push(x); }
        else if (ch == 2) {
            if (!q.empty()) { cout << q.front() << "\n"; q.pop(); }
            else cout << "Empty\n";
        }
        else if (ch == 3) cout << (q.empty() ? "Empty\n" : "Not Empty\n");
        else if (ch == 4) cout << q.size() << "\n";
        else if (ch == 5) cout << (q.empty() ? -1 : q.front()) << "\n";
        else break;
    }
}

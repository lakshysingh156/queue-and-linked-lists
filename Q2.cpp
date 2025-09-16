#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 5, a[5], front = 0, rear = 0, cnt = 0, ch, x;
    while (true) {
        cout << "\n1 enq 2 deq 3 display 4 exit\n";
        cin >> ch;
        if (ch == 1) {
            if (cnt == n) cout << "Full\n";
            else { cin >> x; a[rear] = x; rear = (rear + 1) % n; cnt++; }
        }
        else if (ch == 2) {
            if (!cnt) cout << "Empty\n";
            else { cout << a[front] << "\n"; front = (front + 1) % n; cnt--; }
        }
        else if (ch == 3) {
            if (!cnt) cout << "Empty\n";
            else {
                int i = front, c = cnt;
                while (c--) { cout << a[i] << " "; i = (i + 1) % n; }
                cout << "\n";
            }
        }
        else break;
    }
}

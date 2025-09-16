#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; q.push(x);
    }
    int half = n / 2;
    queue<int> q1;
    for (int i = 0; i < half; i++) { q1.push(q.front()); q.pop(); }
    while (!q1.empty()) {
        cout << q1.front() << " " << q.front() << " ";
        q1.pop(); q.pop();
    }
}

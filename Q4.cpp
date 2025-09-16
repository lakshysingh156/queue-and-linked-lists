#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int freq[256] = {0};
    queue<char> q;
    for (char c : s) {
        if (c == ' ') continue;
        freq[(unsigned char)c]++;
        q.push(c);
        while (!q.empty() && freq[(unsigned char)q.front()] > 1) q.pop();
        if (q.empty()) cout << -1 << " ";
        else cout << q.front() << " ";
    }
}

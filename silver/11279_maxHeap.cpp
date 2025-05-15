#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tn;
    cin >> tn;
    priority_queue<int> pq;  // 최대 힙 (우선순위 큐)

    while (tn--) {
        int input;
        cin >> input;
        if (input == 0) {
            if (pq.empty()) {
                cout << 0 << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(input);
        }
    }
    return 0;
}

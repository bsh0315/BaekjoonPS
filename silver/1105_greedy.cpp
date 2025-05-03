#include <bits/stdc++.h>
using namespace std;

int main() {
    string l, r;
    cin >> l >> r;

    // 자릿수가 다르면 절대 같은 자리에서 8이 같을 수 없음
    if (l.size() != r.size()) {
        cout << 0 << '\n';
        return 0;
    }

    int count = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (l[i] == r[i]) {
            if (l[i] == '8') ++count;
        } else {
            break;  // 다른 숫자 나오면 뒤는 비교 안 함
        }
    }

    cout << count << '\n';
}

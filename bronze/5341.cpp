#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    while (cin >> n) {
        if (n == 0) 
            break;                       // 0이면 출력하지 않고 즉시 탈출
        cout << n * (n + 1) / 2 << '\n';
    }
    return 0;
}

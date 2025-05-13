#include <iostream>
using namespace std;

int combination(int n, int r) {
    long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << combination(M, N) << '\n';
    }
}

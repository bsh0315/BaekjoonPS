#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 0, M = 0;
    cin >> N >> M;

    vector<bool> primes_bool(M - N + 1, true);

    if (N == 1) primes_bool[0] = false; // 1은 소수가 아니니까 예외 처리

    // 2부터 sqrt(M)까지의 소수를 구해서 [N, M] 구간에서 배수 제거
    for (int i = 2; i * i <= M; ++i) {
        for (int j = max(i * i, ((N + i - 1) / i) * i); j <= M; j += i) {
            primes_bool[j - N] = false;
        }
    }

    // 결과 출력
    for (int i = 0; i < M - N + 1; ++i) {
        if (primes_bool[i]) {
            cout << i + N << '\n';
        }
    }

    return 0;
}

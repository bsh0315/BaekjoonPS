#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

long long modPow(long long a, long long b, long long mod){
    if(b == 0) return 1 % mod;         // C==1이면 0 반환
    if(b == 1) return a % mod;

    long long half = modPow(a, b/2, mod);
    // (half * half) % mod — 64비트 안전
    long long res = ( (__int128)half * half ) % mod;

    if(b % 2 == 1){
        res = ( (__int128)res * (a % mod) ) % mod;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A, B, C;
    if(!(cin >> A >> B >> C)) return 0;
    cout << modPow(A % C, B, C) << "\n";
}

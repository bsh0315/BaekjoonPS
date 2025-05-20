#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int bit = 1;
    while (bit <= x) bit <<= 1;
    bit >>= 1;

    int result = 0, temp = x, count = 0;
    while (result != x) {
        if (bit > temp) {
            bit >>= 1;
            continue;
        }
        result |= bit;
        temp   -= bit;
        ++count;
    }
    cout << count << '\n';
}

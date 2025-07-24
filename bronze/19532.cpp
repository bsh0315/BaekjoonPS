// 크래머 공식 이용.

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int det = a*e - b*d;
    cout << (c*e - b*f) / det << ' ' << (a*f - c*d) / det;
}
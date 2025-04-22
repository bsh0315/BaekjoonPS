#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int size_a = a.size();
    int size_b = b.size();
    int min_diff = size_a; // 초기값을 최대 차이로 설정 (모든 문자가 다름)

    for(int i =0; i<size_b - size_a +1; ++i){
        int diff = 0;
        for(int j = 0;j<size_a; ++j){
            if(a[j] != b[i+j]){
                ++diff;
            }
        }
        min_diff = min(min_diff, diff);
    }
    cout << min_diff << '\n';
    return 0;
}
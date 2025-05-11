// 백준 1024 수열의 합 다른 풀이
// 등차수열의 합 이용.
// (2a + (l-1))/2*l = n 
// 이 식을 이용해서 a값을 도출한 후 코드작성.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int first_val = 0;
    for(int i = l; i<=100; ++i){
        first_val = n/i - (i-1)/2;
        int sum = 0;
        if(first_val < 0){
            continue;
        }
        if(n == (2*first_val+(i-1))*i/2){
            for(int j = first_val; j<first_val + i; ++j){
                cout << j << ' ';
            }
            return 0;
        }
    }
    cout << -1 << '\n';
}

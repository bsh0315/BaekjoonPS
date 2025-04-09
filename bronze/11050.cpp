// 11050 이항계수
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0, K = 0;
    cin >> N >> K;
    
    int value1 = 1, value2 = 1;
    for(int i = N; i> N-K; --i){
        value1 *= i;
    }

    for(int i = 1; i<=K; ++i){
        value2 *= i;
    }

    cout << value1/value2 << '\n';
}
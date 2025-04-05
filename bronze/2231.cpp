// 2231 분해합
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0, flag = 0;
    cin >> N;

    for(int i = 1; i<N; ++i){
        int M = i;
        int rest_sum = 0;
        while(M>0){
            rest_sum += M%10;
            M /= 10;
        }
        if(i+rest_sum == N){
            cout << i << '\n';
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << 0 << '\n';
    }
}
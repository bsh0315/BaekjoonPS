#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n <= 2){return 1;}
    else {return fibo(n-1) + fibo(n-2);}
}

int main(){
    int n;
    cin >> n;

    for(int i = 1; i<=n; ++i){
        cout << fibo(i) << ' ';
    }

    cout << '\n';
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fibo(ll n){
    if(n <= 1){
        return 1;
    }

    return (fibo(n-1)%1,000,000,007) + (fibo(n-2)%1,000,000,007); 

}

int main(){
    ll n;
    cin >> n;

    cout << fibo(n-1) << '\n';
}
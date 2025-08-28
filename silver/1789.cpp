#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    
    long long sum = 0;
    long long ans = 0;
    for(long long i = 1; i<=n+1; ++i){
        sum += i;
        if(sum > n){
            ans = i -1;
            break;
        }
    }

    cout << ans << '\n';
}
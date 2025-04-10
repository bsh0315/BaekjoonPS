//15829 Hashing
// p값이 업데이트 될 때마다,
// 그리고 각 항의 값이 업데이트 될 때마다
// % M을 해야함

#include<bits/stdc++.h>
using namespace std;

int main(){
    int L;
    cin >> L;
    vector<char> arr(L);

    long long sum = 0, p = 1, M = 1234567891;
    for(int i = 0; i<L ; ++i){
        cin >> arr[i];
        sum =  (sum+(arr[i]-96)*p) % M ;
        p = (p*31)%M;
    }

    cout << sum << '\n';
}

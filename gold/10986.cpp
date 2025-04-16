#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long  n, m, x;
    long long  sum = 0;
    cin >> n >> m;
    vector<long long> arr(m, 0);
    long long  result = 0;

    for(int i = 0; i < n; ++i){
        cin >> x;
        sum += x;
        arr[sum % m]++;
    }

    for(int i = 0; i < m; ++i){
        result += (arr[i]*(arr[i]-1))/2;
    }

    cout << arr[0] + result << '\n';
}

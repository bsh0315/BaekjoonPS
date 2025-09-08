#include<bits/stdc++.h>
using namespace std;

int arr[1000001] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 5;


    for(int i = 5; i<= n; ++i){
        arr[i] = (arr[i-1] + arr[i-2])%15746;
    }

    cout << arr[n] << '\n';


}
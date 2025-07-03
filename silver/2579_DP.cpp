#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> max_arr(n);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }


    max_arr[0] = arr[0];
    max_arr[1] = arr[0] + arr[1];
    max_arr[2] = arr[2]+max(arr[1], arr[0]);
    for(int i = 3; i<n; ++i){
        max_arr[i] = arr[i] + max(max_arr[i-2], max_arr[i-3] + arr[i-1]);
    }

    cout << max_arr[n-1] << '\n';
}   
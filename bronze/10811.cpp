#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);

    for(int i =0; i<n; ++i){
        arr[i] = i+1;
    }
    for(int i = 0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        int size = b-a+1;
        for(int j = 0; j<size/2; ++j){
            swap(arr[a+j-1], arr[b-j-1]);
        }
    }

    for(int i = 0; i<n; ++i){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}
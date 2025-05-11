#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 

    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(n);
    int sum = 0;

    for(int i = 0; i<n; ++i){
        cin >> arr1[i];
        sum += arr1[i];
        arr2[i] = sum;
    }

    for(int i = 0;  i<m; ++i){
        int x,y;
        cin >> x >> y;
        cout << arr2[y-1]-arr2[x-2] << '\n';
    }

}
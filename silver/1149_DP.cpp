#include<bits/stdc++.h>
using namespace std;

int n, ans = 0, prev;
vector<vector<int>> arr;


int main(){
    cin >> n;
    arr.assign(n+1, vector<int>(4));
    vector<int> dp(n+1, 0);
    
    int i = 1;
    while(i <= n){
        cin >> arr[i][1] >> arr[i][2] >> arr[i][3];
        if(i == 1){++i; continue;}

        arr[i][1] += min(arr[i-1][2], arr[i-1][3]);
        arr[i][2] += min(arr[i-1][1], arr[i-1][3]);
        arr[i][3] += min(arr[i-1][1], arr[i-1][2]);
        ++i;
    }
    cout << min(min(arr[n][1], arr[n][2]), arr[n][3]) << '\n';

}
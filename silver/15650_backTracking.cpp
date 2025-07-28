#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& arr, int n, int m, int start){
    if(arr.size() == m){
        for(int ans : arr){
            cout << ans << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = start; i<=n; ++i){
        arr.push_back(i);
        DFS(arr, n, m, i+1);
        arr.pop_back();
    }
}

int main(){
    int n, m; 
    cin >> n >> m;
    vector<int> arr;

    DFS(arr, n, m, 1);
    
}
#include<bits/stdc++.h>
using namespace std;

void DFS(vector<pair<int,int>>& arr, vector<int>& ans, int n, int m, int& size){
    if(size == m){
        for(int ele : ans){
            cout << ele << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i<n; ++i){
        if(!arr[i].second){
            ans.push_back(arr[i].first);
            arr[i].second = 1;
            ++size;

            DFS(arr, ans, n, m, size);
            ans.pop_back();
            arr[i].second = 0;
            --size;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr(n);
    vector<int> ans;

    for(int i = 0; i<n; ++i){
        cin >> arr[i].first;
        arr[i].second = 0;
    }

    sort(arr.begin(), arr.end());

    int size = 0;
    DFS(arr, ans, n, m, size);
}
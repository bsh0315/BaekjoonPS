#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> arr(n);

    for(int i = 0; i<n; ++i){
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end(), [](const auto &a, const auto &b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second < b.second;

    });

    for(int i = 0; i<n; ++i){
        cout << arr[i].first << ' ' << arr[i].second << '\n';
    }
}
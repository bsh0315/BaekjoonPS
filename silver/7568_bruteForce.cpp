#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int,int>> arr1(n);
    vector<int> result(n);

    for(int i = 0; i<n; ++i){
        cin >> arr1[i].first >> arr1[i].second;
        result[i] = 1;
    }

    for(int i = 0; i<n ;++i){
        for(int j = 0; j<n; ++j){
            if(arr1[i].first < arr1[j].first && arr1[i].second < arr1[j].second){
                ++result[i];
            }
        }
    }

    for(int i = 0; i<n; ++i){
        cout << result[i] << '\n';
    }
    
}
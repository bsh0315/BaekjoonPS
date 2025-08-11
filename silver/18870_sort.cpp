#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int,int>> input_arr(n);
    vector<int> ans(n);
    for(int i =0; i < n; ++i){
        cin >> input_arr[i].first;
        input_arr[i].second = i;
    }

    int count = 0;
    sort(input_arr.begin(), input_arr.end(), [](const auto &a, const auto &b){
        return a.first < b.first;   
    });

    for(int i = 0; i<n-1; ++i){
        ans[input_arr[i].second] =  count;

        if(input_arr[i].first < input_arr[i+1].first){
            ++count;
        }
    }
    ans[input_arr[n-1].second] = count;

    for(int i = 0; i<n; ++i){
        cout << ans[i] << ' ';
    }
    cout << '\n';
}
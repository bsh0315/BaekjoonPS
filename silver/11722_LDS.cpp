#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> cnt(n,1);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<i; ++j){
            if(arr[i] < arr[j]){
                cnt[i] = max(cnt[i], cnt[j] +1);
            }
        }
    }

    auto it = max_element(cnt.begin(), cnt.end());
    cout << *it << '\n';
}
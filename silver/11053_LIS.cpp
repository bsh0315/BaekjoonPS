// LIS 가장 긴 증가하는 부분 수열 기본 문제.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> cnt(n, 1);

    for(int i = 0; i<n; ++i){
        cin >> arr1[i];
    }

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<i; ++j){
            if(arr1[j] < arr1[i]){
                cnt[i] = max(cnt[i], cnt[j] +1);
            }
        }
    }

    auto it = max_element(cnt.begin(), cnt.end());
    cout << *it << '\n';
}
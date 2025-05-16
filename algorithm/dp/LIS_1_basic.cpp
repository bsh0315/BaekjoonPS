// LIS 가장 긴 증가하는 부분 수열 기본 문제.
// 가장 기본적인 DP 알고리즘임.
// O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> cnt(n, 1); // 최소값은 어차피 1이상.

    for(int i = 0; i<n; ++i){
        cin >> arr1[i];
    }

    for(int i = 0; i<n; ++i){ // 원소를 2개씩 짝지어서 cnt값을 업데이트함.
        for(int j = 0; j<i; ++j){
            if(arr1[j] < arr1[i] && cnt[i] < cnt[j] + 1){
                cnt[i] = cnt[j] + 1;
            }
        }
    }

    auto it = max_element(cnt.begin(), cnt.end());
    cout << *it << '\n';
}
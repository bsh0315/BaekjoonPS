// 11054 DP, LIS문제 활용.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> cnt1(n,1);
    vector<int> cnt2(n,1);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    // LIS 구하기
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<i; ++j){
            if(arr[i] > arr[j]){
                cnt1[i] = max(cnt1[i], cnt1[j]+1);
            }
        }
    }

    // 역순 LIS 구하기.
    for(int i = n-1; i>=0; --i){
        for(int j = n-1; j>i; --j){
            if(arr[i] > arr[j]){
                cnt2[i] = max(cnt2[i], cnt2[j]+1);
            }
        }
    }

    int max = 0;
    for(int i = 0; i<n; ++i){
        if(cnt1[i] + cnt2[i] > max){
            max = cnt1[i] + cnt2[i];
        }
    }

    cout << max-1 << '\n';
}
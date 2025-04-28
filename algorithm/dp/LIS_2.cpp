// DP, LIS 약간 응용 문제.
// 증가하는 부분 수열 중에서 합이 각 원소들의 합이 가장 큰 것을 구함.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> val(n);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
        val[i] = arr[i];
    }


    for(int i = 0; i<n; ++i){
        for(int j = 0; j<i; ++j){
            if(arr[i] > arr[j]){
                val[i] = max(val[i],arr[i] + val[j]);
            }
        }
    }
    
    auto it = max_element(val.begin(), val.end());
    cout << *it << '\n';
}
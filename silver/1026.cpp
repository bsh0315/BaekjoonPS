#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);

    for(int i = 0; i<n; ++i){
        cin >> arr1[i];
    }

    for(int i = 0; i<n; ++i){
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(),[](const auto& a, const auto& b){
        return a>b;
    });

    int sum = 0;
    for(int i = 0; i<n; ++i){
        sum += arr1[i] * arr2[i];
    }

    cout << sum << '\n';


}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    int count = 0;
    for(int i = n-1; i>=0; --i){
        int val = k/arr[i];
        if(k == 0){break;}
        if(val > 0){
            count += val;
            k -= arr[i] * val;
        }
    }

    cout << count << '\n';
}
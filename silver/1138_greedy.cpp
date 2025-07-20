#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> result(n, 0);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    int zero_cnt = 0;
    int loc = 0;
    for(int i = 0; i<n; ++i){
        zero_cnt = 0;
        for(int j = 0; j<n; ++j){
            if(result[j] == 0){
                ++zero_cnt;
            }

            if(zero_cnt == arr[i]+1){
                loc = j;
                break;
            }
        }
        result[loc] = i+1;
           
    }

    for(int i = 0; i<n; ++i){
        cout << result[i] << ' ';
    }

} 
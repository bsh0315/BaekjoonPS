#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    string s;

    for(int i = 0;i<n; ++i){
        cin >> s;
        int size = s.size();
        int sum = 0;
        int arr[26] = {0,};
        for(int j = 0; j<size; ++j){
            if(arr[s[j] - 97] == 0){
                arr[s[j] - 97] = 1;
            }
            else{
                if(s[j] != s[j-1]){
                    break;
                }
            }

            if(j == size-1){
                ++cnt;
            }
            
        }
    }

    cout << cnt << '\n';

    
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> cnt(n);
    vector<int> arr(n, 0);
    for(int i = 0; i<n; ++i){
        cin >> cnt[i];
    }

    arr[cnt[0]] = 1;
    int count = 0;
    for(int i = n-1; i>0; --i){
        int pivot = i+1; // 키가 몇인지 저장.
        count = 0;
        for(int j = 0; j<n-1 ; ++j){

            if(arr[j] > pivot && arr[j] != 0){
                ++count;
            }
            if(count == cnt[i]){
                for(int k = j; k<n-2 && arr[k] != 0; ++k){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                }
                arr[n-i-1] = i+1;  
            }
        }
        
        
        
    }

}
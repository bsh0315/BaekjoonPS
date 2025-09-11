#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define size 123457

int n = 1;
int arr[2*size+1] = {0,};
int main(){
    fastio;
    
    int size_2 = 2*size;
    
    arr[1] = 1;
    for(int i = 2; i*i < size_2; ++i){
        if(!arr[i]){
            for(int j = i*i; j<size_2; j+=i){
                    arr[j] = 1;
            }
        }
    }


    int cnt = 0;
    for(int i = 1; i<=size_2; ++i){
        if(!arr[i]){
            ++cnt;
        }
        arr[i] = cnt;
    }

    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        cout << arr[2*n] - arr[n] << '\n';
        
    
    }
}
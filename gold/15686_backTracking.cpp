#include<bits/stdc++.h>
using namespace std;
#define size 505
int n;
int arr[size][size];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    for(int i = 0; i<size; ++i){
        for(int j = 0; j<i+1; ++j){
            cin >> arr[i][j];
        }
    }

    for(int i = size-1; i>=0; --i){
        for(int j = 0; j< i; ++j){
            arr[i-1][j] += max_element(arr[i][j], arr[i][j+1]); 
        }
    }
}
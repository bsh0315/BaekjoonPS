#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i<n; ++i){
        for(int j = n-i-1; j<n; ++j){
            cout << '*';
        }
        for(int j = (n-(i+1))*2; j>0; j-=1){
            cout << ' '; 
        }
        for(int j = n-i-1; j<n; ++j){
            cout << '*';
        }
        cout << '\n';
    }
    for(int i = 0; i<n-1; ++i){
        for(int j = 0; j<n-1-i; ++j){
            cout << '*';
        }
        for(int j = 0; j<(i+1)*2; j+=1){
            cout << ' '; 
        }
        for(int j = 0; j<n-1-i; ++j){
            cout << '*';
        }
        cout << '\n';
    }
}
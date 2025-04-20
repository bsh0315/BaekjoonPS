#include<bits/stdc++.h>
using namespace std;

int main(){
    int pivot = 1;
    int a, b, n;
    cin >> n;

    for(int i = 0; i<n; ++i){
        cin >> a >> b;
        if(pivot == a){
            pivot = b;
        }
        else if(pivot == b){
            pivot = a;
        }
        else {
            continue;
        }
    }

    cout << pivot << '\n';
    
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 1; i<= N; ++i){
        int n = 0;
        cin >> n;
        if(i%2 != n%2) {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
}
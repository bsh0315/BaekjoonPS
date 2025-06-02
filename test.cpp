#include<bits/stdc++.h>
using namespace std;

long long combination(int y, int x){
    long long result = 1;
    for(int i = 1; i<=x; ++i) {
        result *= (y-i+1);
        result /= i;
    }

    return result;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; ++i){
        int x, y;
        cin >> x >> y;
        cout << combination(y, x) << '\n'; 
    }
}
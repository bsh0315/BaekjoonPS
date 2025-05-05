#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum_Y = 0, sum_M = 0;
    for(int i = 0; i<n; ++i){
        int x;
        cin >> x;
        sum_Y += ((x/30)+1)*10;
        sum_M += ((x/60)+1)*15;
    }

    if(sum_Y > sum_M){
        cout << 'M' << ' ' << sum_M << '\n';
    }
    else if(sum_Y < sum_M){
        cout << 'Y' << ' ' << sum_Y << '\n';
    }
    else{
        cout << 'Y' << ' ' << 'M' << ' ' << sum_M << '\n';
    }
}
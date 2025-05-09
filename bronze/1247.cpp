#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;

    for(int i = 0; i<3; ++i){
        cin >> n;
        long long sum = 0;
        int flow = 0;
        for(int j = 0; j<n ;++j){
            long long x;
            cin >> x;
            long long temp = sum;
            sum += x;
            if(temp> 0 && x >0 && sum < 0){
                
            }
        }
        if(sum > 0){
            cout << '+' << '\n';
        }
        else if(sum < 0){
            cout << '-' << '\n';
        }
        else{
            cout << '0' << '\n';
        }
    }
}
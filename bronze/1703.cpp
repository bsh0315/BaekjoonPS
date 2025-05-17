#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int x;
        cin >> x;
        if(x == 0){
            break;
        }
        int result = 1;
        for(int i = 0; i<x; ++i){
            int y, z;
            cin >> y >> z;

            result *= y;
            result -= z;
        }

        cout << result << '\n';
    }
}
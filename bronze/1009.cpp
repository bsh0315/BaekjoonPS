#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i<n; ++i){
        int x, y;
        cin >> x >> y;
        if(x%10 == 0){
                cout << 10 << '\n';
                continue;
            }
        int val = 1;
        int result;
        for(int j = 0; j<y; ++j){
            val = val * x;
            result = val % 10;
            val %= 10;
            
        }
        

        cout << result << '\n';
    }
}

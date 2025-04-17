#include<bits/stdc++.h>
using namespace std;

#define min(x,y) (x)>(y)?(y):(x)
int main(){
    int x, y, w, h;
    cin >> x >> y >> w >>h;

    int diff1 = min(abs(x-w), abs(x)), diff2 = min(abs(y-h), abs(y));

    if(diff1 > diff2){
        cout << diff2 << '\n';
    }
    else{
        cout << diff1 << '\n';
    }


}
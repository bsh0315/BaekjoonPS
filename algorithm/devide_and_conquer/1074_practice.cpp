// 분할 정복 기법 이용.

#include<bits/stdc++.h>
using namespace std;

int n,r,c;
int ans = 0;

void Z(int x, int y, int size){
    if(y == r && x == c){
        cout << ans << '\n';
        return;
    }

    // 만약 (x,r) 값이 범위내에 존재하는 경우.
    if(r<size+y && r >= y && c < size+x && c >= x){
        int new_size = size >> 1;
        // 1 사분면
        Z(x, y, new_size);
        // 2 사분면
        Z(x+new_size, y, new_size);
        // 3 사분면
        Z(x, y+new_size, new_size);
        // 4 사분면
        Z(x+new_size, y+new_size, new_size);
    
    }
    else{
        ans += size*size;
    }


}

int main(){
    cin >> n >> r >> c; // r : y축, c : x축

    int count = 0; 
    Z(0, 0, 1 << n);
}
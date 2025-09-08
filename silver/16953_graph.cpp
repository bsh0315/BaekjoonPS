#include<bits/stdc++.h>
using namespace std;

bool flag = false;
long long ans = INT_MAX;
void Solution(long long a, long long b, long long cnt){
    if(a > b){
        return;
    }
    
    if(a == b){
        if(ans > cnt+1){
            ans = cnt+1;
        }
        flag = true;
        return;
    }

    Solution(a*2, b, cnt+1);
    Solution(a*10 +1, b, cnt+1);
}

int main(){
    long long a, b, cnt = 0;
    cin >> a >> b;

    Solution(a, b, cnt);
    if(!flag){
        cout << -1 << '\n';
    }
    else{
        cout << ans << '\n';
    }

}
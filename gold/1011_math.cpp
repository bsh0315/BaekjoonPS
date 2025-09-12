#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    for(int i = 0; i<n; ++i){
        int x, y;
        cin >> x >> y;

        int cnt = 0, ans = 0;
        int diff = y-x;
        
        while(cnt * cnt <= diff){
            ++cnt;
        }
        --cnt;
        int rest = diff - (cnt * cnt);
        ans = 2*cnt-1 + ceil((double)rest/cnt);
        cout << ans << '\n';
    }
}
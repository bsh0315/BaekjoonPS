#include<bits/stdc++.h>
using namespace std;


vector<string> ans;

void Solution(int n, int r, int c){
    if(n == 3){
        ans[r][c] = '*';
        ans[r+1][c-1] = '*';
        ans[r+1][c+1] = '*';
        for(int i = c-2; i<=c+2; ++i){
            ans[r+2][i] = '*';
        }
        return;
    }

    int next_n = n/2;

    //윗쪽 부분
    Solution(next_n, r, c);
    //왼쪽 아랫 부분
    Solution(next_n, r+next_n, c-next_n);
    //오른쪽 아랫 부분
    Solution(next_n, r+next_n, c+next_n);
    
}

int main(){
    int n;
    cin >> n;
    // 높이 = n, 밑변 = 2*n -1
    int h = n, w = 2*n -1;
    
    ans.assign(h, string(w, ' '));
    
    Solution(n, 0, n-1);

    for(string s: ans){
        cout << s << '\n';
    }
}
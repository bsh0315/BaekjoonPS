#include<bits/stdc++.h>
using namespace std;

vector<string> ans;

void Solution(int n, int r, int c){
    if(n == 3){
        ans[r][c] = '*';
        ans[r][c+1] = '*';
        ans[r][c+2] = '*';
        ans[r+1][c] = '*';
        ans[r+1][c+2] = '*';
        ans[r+2][c] = '*';
        ans[r+2][c+1] = '*';
        ans[r+2][c+2] = '*'; 
        return;
    }

    int next_n = n/3;
    Solution(next_n, r, c);
    Solution(next_n, r, c+next_n);
    Solution(next_n, r, c+next_n*2);
    Solution(next_n, r+next_n, c);
    Solution(next_n, r+next_n, c+next_n*2);
    Solution(next_n, r+next_n*2, c);
    Solution(next_n, r+next_n*2, c+next_n);
    Solution(next_n, r+next_n*2, c+next_n*2);

}
int main(){
    int n;
    cin >> n;
    ans.assign(n,string(n, ' '));

    Solution(n, 0 , 0);

    for(string s: ans){
        cout << s << '\n';
    }
}
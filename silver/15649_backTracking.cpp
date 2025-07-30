#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& ans, vector<int>& visit, int n, int m){
    if(ans.size() == m){
        for(int ans_ele : ans){
            cout << ans_ele << ' '; 
        }
        cout << '\n';
        return;
    }
    
    for(int i = 1; i<=n; ++i){
        if(!visit[i]){
            visit[i] = 1;
            ans.push_back(i);
            DFS(ans, visit, n, m);
            ans.pop_back();
            visit[i] = 0;
        }   
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    vector<int> visit(n+1, 0);

    DFS(ans, visit, n, m);

}
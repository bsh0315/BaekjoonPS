#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>& adj_list, vector<int>& visit, int& ans, int start){
    visit[start] = 1;
    ++ans;
    for(int u : adj_list[start]){
        if(!visit[u]){
            DFS(adj_list, visit, ans, u);
        }
    }
}

int main(){
    int all_com, connected_com;
    int ans = -1;
    cin >> all_com >> connected_com;

    vector<int> visit(all_com+1, 0);
    vector<vector<int>> adj_list(all_com+1, vector<int>(0));

    for(int i = 0; i<connected_com; ++i) {
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    for(int i = 1; i<=all_com; ++i){
        sort(adj_list[i].begin(), adj_list[i].end());
    }
    DFS(adj_list ,visit ,ans ,1);
    cout << ans << '\n';

}
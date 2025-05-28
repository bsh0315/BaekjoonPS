#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& visit, vector<int>& depth, vector<vector<int>>& adj_list, int depth_val, int start){
    visit[start] = 1;
    depth[start] = depth_val;
    for(int u: adj_list[start]){
        if(!visit[u]){
            DFS(visit, depth, adj_list, depth[start] + 1, u);

        }
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    
    vector<int> visit(n+1, 0);
    vector<int> depth(n+1, -1);
    vector<vector<int>> adj_list(n+1, vector<int>(0));

    for(int i = 0; i<m; ++i){
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }


    for(int i = 1; i<=n; ++i){
        sort(adj_list[i].begin(), adj_list[i].end());
    }

    int depth_val = 0;
    DFS(visit, depth, adj_list, depth_val, r);

    for(int i = 1; i<=n; ++i){
        cout << depth[i] << '\n';
    }

}
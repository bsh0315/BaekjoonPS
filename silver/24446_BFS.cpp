#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int>& visit, vector<vector<int>> adj_list, vector<int>& depth, int start){
    queue<int> q;
    q.push(start);
    visit[start] = 1;
    depth[start] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i: adj_list[u]){
            if(visit[i] == 0){
                visit[i] = 1;
                q.push(i);
                depth[i] = depth[u] +1;
            }
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

    BFS(visit, adj_list, depth, r);

    for(int i = 1; i<n+1; ++i){
        cout << depth[i] << '\n';
    }
}
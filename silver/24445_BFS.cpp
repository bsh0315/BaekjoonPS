#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int>& visited, vector<int>& seq, vector<vector<int>> adj_list, int start){
    visited[start] = 1;
    queue<int> q;
    q.push(start);
    int count = 0;

    while(!q.empty()){
        int u = q.front();
        ++count; 
        seq[u] = count;
        q.pop();
        for(auto it: adj_list[u]){
            if(visited[it] == 0){
                visited[it] = 1;
                q.push(it);
            }
        }    
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    vector<int> visited(n+1, 0);
    vector<int> seq(n+1, 0);
    vector<vector<int>> adj_list(n+1, vector<int>(0));

    for(int i = 0; i<m; ++i){
        int x, y;
        cin >> x >> y; 
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    for(int i = 1; i<=n; ++i){
        sort(adj_list[i].begin(), adj_list[i].end(), [](const auto a,const auto b){
            return a>b;
        });
    }

    BFS(visited, seq, adj_list, r);

    for(int i = 1; i<= n; ++i){
        cout << seq[i] << '\n';
    }
}
// queue 자료구조 이용.
// BFS => time complextiry : O(n) + O(2E) // E는 간선의 수.
#include<bits/stdc++.h>
using namespace std;

void DFS(int start, const vector<vector<int>> adj, vector<int>& visit ){
    visit[start] = 1;
    cout << start << ' ';
    
    for(int u : adj[start]){
        if(visit[u] != 1){
            DFS(u, adj, visit);
        }
    }
}


void BFS(int start, const vector<vector<int>> adj, vector<int>& visit){
    queue<int> q;
    visit[start] = 1;
    q.push(start);

    while(!q.empty()){
        int v = q.front(); 
        cout << v << ' ';
        q.pop();
        for(int  i = 0; i<adj[v].size(); ++i){
            int n = adj[v][i];
            if(!visit[n]){
                visit[n] = 1;
                q.push(n);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;
    vector<vector<int>> adj_list(n+1); // 인접 리스트
    vector<int> visit(n+1, 0); // 노드 방문 여부 저장

    for(int i = 0; i<m; ++i){
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    for(int i = 0; i<n+1; ++i){
        sort(adj_list[i].begin(), adj_list[i].end());
    }

    DFS(v, adj_list, visit);
    cout << '\n';
    
    fill(visit.begin(), visit.end(), 0);
    BFS(v, adj_list, visit);
    cout << '\n';
    
}
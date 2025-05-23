#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int>& visit, vector<int>& seq,  vector<vector<int>> adj_list, int start){
    int count = 0;
    seq[start] = count;
    visit[start] = 1;
    queue<int> q;
    q.push(start);
    
    while(!q.empty()){
        ++count;
        int u = q.front();
        seq[q.front()] = count; 
        q.pop();
        for(auto it: adj_list[u]){
            if(visit[it] == 0){
                visit[it] = 1;
                q.push(it);
            }

        }
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    vector<int> visit(n+1, 0);
    vector<int> seq(n+1, 0);
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

    BFS(visit, seq, adj_list, r);
    for(int i = 1; i<=n; ++i){
        cout << seq[i] << '\n';
    }
}
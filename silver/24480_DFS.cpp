#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& visit, vector<int>& seq, vector<vector<int>>& adj_list, int& seq_cnt, int start){
    visit[start] = 1;
    seq[start] = ++seq_cnt;
    for(int u: adj_list[start]){
        if(!visit[u]){
            DFS(visit, seq, adj_list, seq_cnt, u);
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
        sort(adj_list[i].begin(), adj_list[i].end(), [](const auto a, const auto b){
            return a > b;
        });
    }

    int seq_cnt = 0;
    DFS(visit, seq, adj_list, seq_cnt, r);

    for(int i = 1; i<=n; ++i){
        cout << seq[i] << '\n';
     }
}
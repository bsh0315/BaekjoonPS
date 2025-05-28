#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& visit, vector<int>& depth, vector<int>& seq, vector<vector<int>>& adj_list, int& seq_cnt, int depth_val, int start){
    visit[start] = 1;
    depth[start] = depth_val;
    seq[start] = ++seq_cnt;
    for(int u: adj_list[start]){
        if(!visit[u]){
            DFS(visit, depth, seq, adj_list, seq_cnt, depth[start] + 1, u);

        }
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    
    vector<int> visit(n+1, 0);
    vector<int> depth(n+1, -1);
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

    int seq_cnt = 0;
    int depth_val = 0;
    DFS(visit, depth, seq, adj_list, depth_val, seq_cnt, r);

    long long result = 0;
    for(int i = 1; i<= n; ++i){
        result += (long long)depth[i] * seq[i];
    }

    cout << result << '\n';
}
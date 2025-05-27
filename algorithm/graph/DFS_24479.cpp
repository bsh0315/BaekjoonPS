#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& visit, vector<vector<int>>& adj_list, vector<int>& seq,int& count, int start){
    visit[start] =1;
    seq[start] = count++;
    for(int i : adj_list[start]){
        if(!visit[i]){
            DFS(visit, adj_list, seq, count, i);
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

    int count = 1;
    DFS(visit, adj_list, seq, count, r);

    for(int i = 1; i<=n; ++i){
        cout << seq[i] << '\n';
    }
}
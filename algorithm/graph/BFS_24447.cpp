// 백준 24447 BFS 문제
// 값의 범위도 유심히 보기! long long 사용 가능성.
#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int>& visit, vector<vector<int>> adj_list, vector<int>& depth, vector<int>& seq, int start){
    int seq_val = 1;
    queue<int> q;
    visit[start] = 1;
    q.push(start);
    depth[start] = 0;
    seq[start] = seq_val;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i: adj_list[u]){
            if(!visit[i]){
                visit[i] = 1;
                q.push(i);
                depth[i] = depth[u] + 1;
                seq[i] = ++seq_val;
            }
        }
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    vector<int> visit(n+1, 0);
    vector<vector<int>> adj_list(n+1, vector<int>(0));
    vector<int> depth(n+1, -1);
    vector<int> seq(n+1, 0);

    for(int i = 0; i<m; ++i){
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    for(int i = 1; i<=n; ++i){
        sort(adj_list[i].begin(), adj_list[i].end());
    }

    BFS(visit, adj_list, depth, seq, r);

    //depth는 최대 99999, seq는 100000임. 따라서 반드시 long long 사용!
    long long result = 0; // int로 하면 틀림. 값이 매우 커짐.
    for(int i = 1; i<=n; ++i){
        result += (long long)depth[i] * seq[i];
    }

    cout << result << '\n';

}


#include<bits/stdc++.h>
using namespace std;
#define INF 1e9

int n, m, start;
vector<vector<pair<int,int>>> adj_list;
vector<int> dist;

void dijkstra(int start){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[start] = 0;

    pq.push({0, start});
    
    while(!pq.empty()){        
        int cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(cost > dist[u]){
            continue;
        }

        for(const auto [v, w] : adj_list[u]){
            if(dist[v] > w+dist[u]){
                dist[v] = w+dist[u];
                pq.push({dist[v],v});
            }

        }
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    cin >> start;

    adj_list.resize(n+1);
    dist.resize(n+1, INF);

    for(int i = 0; i<m; ++i){
        int x, y, z;
        cin >> x >> y >> z;
        
        adj_list[x].push_back({y,z}); 
    }

    dijkstra(start);

    for(int i = 1; i<=n; ++i){
        if(dist[i] == INF){
            cout << "INF" << '\n';
        }
        else{
            cout << dist[i] << '\n';
        }
    }   
}
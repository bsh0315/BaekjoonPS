#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
using lld = long long;

lld n, e;
long long v1, v2;
vector<vector<pair<long long,long long>>> adj_list;
vector<long long> must_visit;
vector<long long> dist;

void dijkstra(long long start){
    for(long long i = 1; i<=n; ++i){
        dist[i] = INF;
    }

    priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>>> pq;
    dist[start] = 0;

    pq.push({0, start});

    while(!pq.empty()){
        long long cost = pq.top().first;
        long long v = pq.top().second;
        pq.pop();

        if(cost > dist[v]){
            continue;
        }

        for(auto [c, u] : adj_list[v]){
            if(dist[u] > dist[v] + c){
                dist[u] = dist[v] + c;
                pq.push({dist[u], u});
            }
        }
    }
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> e;

    adj_list.resize(n+1);
    dist.resize(n+1, INF);
    for(long long i = 0; i<e; ++i){
        long long x, y, z;
        cin >> x >> y >> z;

        adj_list[x].push_back({z,y});
        adj_list[y].push_back({z,x});
    }

    cin >> v1 >> v2; // 반드시 지나야하는 정점 2개
    must_visit.push_back(v1);
    must_visit.push_back(v2);

    dijkstra(v1);
    long long v1_1 = dist[1];
    long long v1_v2 = dist[v2];
    long long v1_n = dist[n];

    dijkstra(v2);
    long long v2_1 = dist[1];
    long long v2_v1 = dist[v1];
    long long v2_n = dist[n];

    long long ans1 = v1_1 + v1_v2 + v2_n;
    long long ans2 = v2_1 + v2_v1 + v1_n;

    if(ans1 >= INF && ans2 >= INF){
        cout << -1 << '\n'; 
        return 0;
    }

    if(ans1>ans2){
        cout << ans2 << '\n';
        return 0;
    }
    cout << ans1 << '\n';
}
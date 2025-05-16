// queue 자료구조 이용.
// time complextiry : O(n) + O(2E) // E는 간선의 수.
#include<bits/stdc++.h>
using namespace std;


void BFS(int start, vector<vector<int>> adj_lists){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;
    vector<vector<int>> adj_list(n+1);
    vector<int> visit(n+1, 0);

    for(int i = 0; i<m; ++i){
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
    }



}
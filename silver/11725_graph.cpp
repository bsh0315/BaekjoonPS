#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>&  adj_list, vector<bool>& visit, vector<int>& ans, int prev, int root){
    prev = root;
    visit[root] = true;
    for(int ele : adj_list[root]){
        if(!visit[ele]){
            ans[ele] = prev;
            DFS(adj_list, visit, ans, prev, ele);
        }
        
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> adj_list(n+1, vector<int> (0));
    vector<bool> visit(n+1, false);
    vector<int> ans(n+1, 0);
    int prev;
    for(int i = 1; i<=n-1; ++i){
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    for(int i = 1; i<=n; ++i){
        sort(adj_list[i].begin(), adj_list[i].end());
    }

    DFS(adj_list, visit, ans, prev, 1);

    int ans_size = ans.size()-1;
    for(int i = 2; i<= ans_size; ++i){
        cout << ans[i] << '\n';
    }


}
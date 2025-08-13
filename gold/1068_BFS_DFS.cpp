#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>& adj_list, vector<int>& visit, int& root, int& cnt, int& delete_node){
    visit[root] = 1;
    if(root == delete_node) {
            return;
        }
    for(int i : adj_list[root]){
        
        if(adj_list[i].empty() && i != delete_node){
            ++cnt;
        }
        if(!visit[i]){
            DFS(adj_list, visit, i, cnt, delete_node);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int del_node;
    int root;
    int cnt = 0;
    cin >> n;
    vector<int> parents(n, 0);
    vector<vector<int>> adj_list(n, vector<int>(0)); 
    vector<int> visit(n, 0);

    for(int i = 0; i<n; ++i){
        cin >> parents[i];
        if(parents[i] == -1){
            root = i;
        }

        if(parents[i] != -1){
            adj_list[parents[i]].push_back(i);
        }
         
    }

    
    for(int i = 0; i<n; ++i){
        sort(adj_list[i].begin(), adj_list[i].end());
    }


    cin >> del_node;
    
    DFS(adj_list, visit, root, cnt, del_node);
    cout << cnt << '\n';


}
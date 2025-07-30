#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& ans, int n, int m){
    if(ans.size() == m){
        for(int ele : ans){
            cout << ele << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i<= n; ++i){
        ans.push_back(i);
        DFS(ans, n , m);
        ans.pop_back();
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    DFS(ans, n, m);
}
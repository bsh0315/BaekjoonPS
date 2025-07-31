#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int>& ans, int n, int m, int start){
    if(ans.size() == m){
        for(int ele : ans){
            cout << ele << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = start; i<= n; ++i){
        ans.push_back(i);
        DFS(ans, n , m, start);
        ans.pop_back();
        ++start;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    DFS(ans, n, m, 1);
}
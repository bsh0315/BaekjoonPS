#include<bits/stdc++.h>
using namespace std;

class Solution{
    int n, m;
    vector<int> input_arr;
    vector<int> ans;

public:
    void Input(){
        cin >> n >> m;
        input_arr.resize(n);
        for(int i = 0; i<n; ++i){
            cin >> input_arr[i];
        }

        sort(input_arr.begin(), input_arr.end());
    }

    void DFS(int start){
        if(ans.size() == m){
            for(int i = 0; i<m; ++i){
                cout << ans[i] << ' ';
            }
            cout << '\n';
            return;
        }

        for(int i = start; i<n; ++i){
            ans.push_back(input_arr[i]);
            
            DFS(i);
            ans.pop_back();
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    s.Input();
    s.DFS(0);
}
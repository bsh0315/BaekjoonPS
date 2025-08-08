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
        for(int i = 0;i<n; ++i){
            cin >> input_arr[i];
        }
        sort(input_arr.begin(), input_arr.end());
    }

    
    void DFS(){
        if(ans.size() == m){
            for(int i = 0; i<m; ++i){
                cout << ans[i] << ' ';
            }
            cout << '\n';
            return;
        }
        int prev = -1e9;
        
        for(int i = 0; i<n; ++i){
            if(input_arr[i] == prev){
                continue;
            }
            ans.push_back(input_arr[i]);
            prev = input_arr[i];
            DFS();
            ans.pop_back();
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution s;
    s.Input();
    s.DFS();

}
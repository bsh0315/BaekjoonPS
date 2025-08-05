#include<bits/stdc++.h>
using namespace std;

class Solution{
    int n, m;
    vector<int> input_arr;
    vector<bool> visit;
    vector<int> ans;
    int cnt = 0;

public:
    void Input(){
        cin >> n >> m;
        input_arr.assign(n, 0);
        visit.assign(n, false);
        for(int i = 0; i<n; ++i){
            cin >> input_arr[i];
        }        
        sort(input_arr.begin(), input_arr.end());

    }   
    
    void DFS(){
        if(cnt == m){
            for(int i = 0; i<m; ++i){
                cout << ans[i] << ' ';
            }
            cout << '\n';
            return;
        }
        int prev = -1e9;
        for(int i = 0; i<n; ++i){
            if(!visit[i] && input_arr[i] != prev){
                visit[i] = true;
                ans.push_back(input_arr[i]);
                ++cnt;
                prev = input_arr[i];
                DFS();
                --cnt;
                ans.pop_back();
                visit[i] = false;
            }
            
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

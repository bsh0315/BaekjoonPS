#include<bits/stdc++.h>
using namespace std;

class Solution{
    int n, m;
    vector<int> input_arr;
    vector<int> ans;

public:
    void input(){
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
        
        int prev = -1e9;

        // DFS 함수 호출 스택에서 특정 숫자가 pop될 때마다 그 수를 prev를 기억하는것이 중요함.
        // 이 수를 기준으로 i값을 변화시키며 코드 진행.
        for(int i = start; i<n; ++i){
            if(prev == input_arr[i] ){
                continue;
            }
            ans.push_back(input_arr[i]);
            DFS(i);
            prev = input_arr[i];
            ans.pop_back();
        }
    }
};

int main(){
    Solution s;
    s.input();
    s.DFS(0);
}
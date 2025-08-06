/* ***********************
기존 문제는 2 4 4와 같은 같은 값이 여러번 나올 경우
출력해서 2 4 4 순으로 같은 수열이 나타 날 수 있음.
*********************** */ 

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
        int prev = -1e9; // 수정 부분 prev 
        // 하나의 함수 스택 마다 prev값을 설정해서 같은 값이 여러번 나오지 못하게 방지함.
        for(int i = start; i<n; ++i){
            if(prev == input_arr[i]){
                continue;
            }
            ans.push_back(input_arr[i]);
            prev = input_arr[i];
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
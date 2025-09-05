#include<bits/stdc++.h>
using namespace std;

int arr[1001][1001];
int ans = 0, n, m;

queue<pair<int,int>> q;

// 상 하 좌 우
int dir_1[4] = {1, -1, 0 , 0};
int dir_2[4] = {0, 0, -1, 1};

bool Check_loc(int x, int y){
    if(x >= 0 && x < n && y >= 0 && y < m){
        return true;
    }
    return false;
}

void BFS(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i<4; ++i){
            int new_x = x+dir_1[i];
            int new_y = y+dir_2[i];
            if(Check_loc(new_x, new_y) && arr[new_x][new_y] == 0){
                arr[new_x][new_y] = arr[x][y] +1;
                q.push({new_x, new_y});
            }

        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> m >> n;

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                q.push({i, j});
            }
        }
    }

    BFS();

    for(int i =0; i<n; ++i){
        for(int j = 0; j < m; ++j){
            if(arr[i][j] == 0){
                cout << -1 << '\n'; 
                return 0;
            }
            if(arr[i][j] > ans){
                ans = arr[i][j];
            }

        }
    }

    cout << ans - 1 << '\n';
    


}
#include<bits/stdc++.h>
using namespace std;

int t;
int m, n, k;
int arr[51][51] = {0,};
int x_arr[4] = {-1, 1, 0, 0}; // 좌, 우, 상, 하
int y_arr[4] = {0 , 0, 1, -1};

void BFS(int x_val, int y_val){
    queue<pair<int, int>> q;
    q.push({x_val, y_val});

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        arr[x][y] = 0;
        q.pop();
        for(int i = 0; i<4; ++i){
            int X = x + x_arr[i];
            int Y = y + y_arr[i]; 

            if(arr[X][Y] == 1){
                q.push({X, Y});
                arr[X][Y] = 0;
            }
        }
    }
}

int main(){
    cin >> t;

    while(t--){
        cin >> m >> n >> k;
        for(int i = 0; i<k; ++i){
            int x, y;
            cin >> x >> y;
            arr[x][y] =1;
        }
        int count = 0;
        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                if(arr[i][j] == 1){
                    BFS(i, j);
                    ++count;
                }
            }
        }
        cout << count << '\n';
    }
}
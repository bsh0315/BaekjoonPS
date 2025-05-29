#include<bits/stdc++.h>
using namespace std;

int x_var[4] = {-1, 1, 0, 0}; // 좌, 우, 상, 하
int y_var[4] = {0, 0, 1, -1}; 
int t;
int m, n, k; // m : x축, n : y축, k : 심은 배추 개수


void dfs(int arr[][51], int x_val, int y_val){
    for(int i = 0; i<4; ++i){
        int X = x_val + x_var[i];
        int Y = y_val + y_var[i];

        if(X>=0 && X <= m-1 && Y >= 0 && Y <= n-1 && arr[X][Y] == 1){
            arr[X][Y] = 0;
            dfs(arr, X, Y);
        }
    }

}

int main(){
    cin >> t;
    
    while(t--){
        cin >> m >> n >> k; //m : x축,  n : y축
        int arr[51][51] = {0,};

        for(int i = 0; i<k; ++i){
            int x, y;
            cin >> x >> y;
            arr[x][y] = 1;
        }    
        
        int count = 0;
        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                if(arr[i][j] == 1){
                    dfs(arr, i, j);
                    ++count;
                }
            }
        }
        cout << count << '\n';
    }
    
 

}
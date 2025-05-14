#include<bits/stdc++.h>
using namespace std;

int n;
int white = 0, blue =0;

void solution(int x, int y, int n, vector<vector<int>> mat){
    int size = n*n;
    int white_cnt = 0;
    int blue_cnt = 0;
    for(int i = x; i<x + n; ++i){
        for(int j = y; j< y + n; ++j){
            if(mat[i][j] == 1){
                ++blue_cnt;
            }
            else{
                ++white_cnt;
            }
        }
    }

    if(white_cnt == size){
        ++white;
        return;
    }
    else if(blue_cnt == size){
        ++blue;
        return;
    }
    
    else{
        solution(x,y, n >> 1, mat);
        solution(x + (n >> 1),y, n >> 1, mat);
        solution(x, y+(n >> 1), (n >> 1), mat);
        solution(x + (n >> 1), y + (n >> 1), (n >> 1), mat);

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n,0));
    for(int i = 0;i<n; ++i){
        for(int j = 0; j<n; ++j){
            cin >> mat[i][j];
        }
    }
    int count = 0;
    solution(0,0,n, mat);
    cout << white << '\n' << blue << '\n';
}
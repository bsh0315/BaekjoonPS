// 그래프 활용(BFS)

/* ****************
풀이 방법
1. pair를 두번 써서 3차원 배열의 x, y, z값을 저장할 수 있는 queue를 만듦
2. 입력받은 배열의 원소값이 1이라면 queue에 push
3. 특정 익은 토마토에서 다른 인접한 토마토가 익을 때는 기존 토마토의 값에 1을 더함.
    -> 정답값을 더 쉽게 출력하기 위해서(익는데 걸리는 총 일수)


****************** */
#include<bits/stdc++.h>
using namespace std;

int arr[101][101][101];
int m, n, h; // h : 높이, m : 가로, n : 세로
int ans = 0;

queue<pair<pair<int,int>,int>> q;

// 상 하 앞 뒤 좌 우
int loc1[6] = {1, -1, 0, 0, 0, 0};// 상 하
int loc2[6] = {0, 0, -1, 1, 0 , 0}; // 앞 뒤
int loc3[6] = {0, 0, 0, 0, -1, 1}; // 좌 우

bool Check(int x, int y, int z){
    if(x >= 0 && x<m &&y >= 0 && y<n && z>= 0 && z<h){
        return true;
    }
    return false;
}

void BFS(){
    while(!q.empty()){
        int x = q.front().second;
        int y = q.front().first.second;
        int z = q.front().first.first;
        q.pop();

        for(int i = 0; i<6; ++i){
            int nx = x+loc3[i];
            int ny = y+loc2[i];
            int nz = z+loc1[i];

            if(Check(nx, ny, nz) && arr[nz][ny][nx] == 0){
                arr[nz][ny][nx] = arr[z][y][x] + 1;
                q.push({{nz, ny}, nx});
            }
        }
    }


    for(int i = 0; i<h; ++i){ // 높이(z)
        for(int j = 0; j<n; ++j){ // 세로(y)
            for(int k = 0; k <m; ++k){ // 가로(x)
                if(arr[i][j][k] == 0){
                    cout << -1 << '\n';
                    return;
                }

                if(arr[i][j][k] > ans){
                    ans = arr[i][j][k];
                }
            }
        }
    }

    cout << ans -1 << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> h;

    for(int i = 0; i<h; ++i){ // 높이(z)
        for(int j = 0; j<n; ++j){ // 세로(y)
            for(int k = 0; k <m; ++k){ // 가로(x)
                cin >> arr[i][j][k];
                if(arr[i][j][k] == 1){
                    q.push({{i, j}, k});
                }
            }
        }
    }


    BFS();

    return 0;
}
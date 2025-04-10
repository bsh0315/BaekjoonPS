#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<char>> board(M, vector<char>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    int result = 64;  // 최대 64칸 전부 칠할 수도 있음

    for (int i = 0; i <= M - 8; ++i) {
        for (int j = 0; j <= N - 8; ++j) {
            int repaint_W = 0;  // 시작이 W인 경우
            int repaint_B = 0;  // 시작이 B인 경우

            for (int x = 0; x < 8; ++x) {
                for (int y = 0; y < 8; ++y) {
                    char expected_W = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char expected_B = ((x + y) % 2 == 0) ? 'B' : 'W';

                    if (board[i + x][j + y] != expected_W) ++repaint_W;
                    if (board[i + x][j + y] != expected_B) ++repaint_B;
                }
            }

            int local_min = min(repaint_W, repaint_B);
            result = min(result, local_min);
        }
    }

    cout << result << '\n';
}

#include <bits/stdc++.h>
using namespace std;

class NM9Solver {
private:
    int n, m;
    vector<int> nums;
    vector<int> current;
    vector<bool> visited;
    set<vector<int>> result; // 중복 방지를 위해 set 사용

public:
    void input() {
        cin >> n >> m;
        nums.resize(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end()); // 사전순 출력을 위해 정렬
        visited.assign(n, false);
    }

    void dfs(int depth) {
        if (depth == m) {
            result.insert(current); // set에 넣어 중복 제거
            return;
        }

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                current.push_back(nums[i]);
                dfs(depth + 1);
                current.pop_back();
                visited[i] = false;
            }
        }
    }

    void solve() {
        dfs(0);
        for (auto &seq : result) {
            for (int num : seq) cout << num << ' ';
            cout << '\n';
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    NM9Solver solver;
    solver.input();
    solver.solve();
    return 0;
}

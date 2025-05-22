#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        
        long long answer = 0;
        unordered_map<int,int> freq;
        freq.reserve(n*1.3);  // 해시맵 미리 예약해 두면 속도↑
        freq.clear();

        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            int want = a ^ x;  
            // 지금까지 본 값 중 'want'가 등장한 수만큼
            // (want ^ a == x) 쌍이 생긴다
            auto it = freq.find(want);
            if (it != freq.end()) {
                answer += it->second;
            }
            // 지금 이 값도 빈도에 추가
            freq[a]++;
        }

        cout << answer << "\n";
    }
    return 0;
}

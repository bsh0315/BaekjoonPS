#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<long long> guitar(N);

    // 1) 입력 → 비트마스크
    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;  // 기타 이름은 무시해도 됨.
        string can;
        cin >> can;  // 길이 M 의 "Y/N" 문자열
        long long mask = 0;
        for(int j = 0; j < M; ++j){
            if(can[j] == 'Y') 
                mask |= (1LL << j);
        }
        guitar[i] = mask;
    }


}
// 10814 나이순 정렬.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0;
    cin >> N;

    vector<pair<int,pair<int, string>>> pair(N);

    for(int i = 0; i<N; ++i){
        cin >> pair[i].second.first >> pair[i].second.second;
        pair[i].first = i;
    }

    stable_sort(pair.begin(), pair.end(), [](const auto &a,const auto &b){
        // 비교함수는 단순히 어떤 원소가 앞에 올 지 혹은 뒤에 올 지를 결정하는 함수임.
        // 값 저장 x
        // (const auto &a, const auto &b) : 원본 데이터 변경할 수 x, 가장 좋은 성능.
        // (auto &a, auto &b) : 원본데이터 수정 가능
        // (auto a, auto b) : 원본 데이터를 복사함. 
        if(a.second.first == b.second.first){ // 나이가 같을 때
            return a.first < b.first; // 입력받은 순서 유지
        }
        return a.second.first < b.second.first; // 나이순 정렬
    });

    for(int i = 0; i<N; ++i){
        cout << pair[i].second.first << ' ' << pair[i].second.second << '\n';
    }
}
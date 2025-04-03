// 나이순 정렬.
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

    stable_sort(pair.begin(), pair.end(), [](auto &a, auto &b){
        if(a.second.first == b.second.first){ // 나이가 같을 때
            return a.first < b.first; // 입력받은 순서 유지
        }
        return a.second.first < b.second.first; // 나이순 정렬
    });

    for(int i = 0; i<N; ++i){
        cout << pair[i].second.first << ' ' << pair[i].second.second << '\n';
    }
}
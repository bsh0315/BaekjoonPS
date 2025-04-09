// 11650 좌표정렬
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    vector<pair<int, int>> loc(N);

    for(int i = 0; i<N; ++i){
        cin >> loc[i].first;
        cin >> loc[i].second;
    }

    sort(loc.begin(), loc.end(), [](const auto& a,const auto& b){
        if(a.first == b.first){
            return a.second < b.second;
        }
        return a.first < b.first;
    });

    for(int i = 0; i<N; ++i){
        cout << loc[i].first << ' ' << loc[i].second << '\n';
    }

    
}
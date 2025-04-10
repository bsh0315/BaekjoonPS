// 10816 숫자 카드 2 
// 단순 이진탐색 알고리즘으로는 풀지 못함.
#include<bits/stdc++.h>
using namespace std;


int main(){
    // 이 부분 없으면 시간 초과뜸.
    ios::sync_with_stdio(false);  // 입출력 속도 최적화
    cin.tie(nullptr);             // cin과 cout 분리

    int N, M;
    cin >> N;
    vector<int> arr1(N);
    map<int,int> map;
    for(int i = 0; i< N; ++i){
        cin >> arr1[i];
        map[arr1[i]]++;
    }
    
    cin >> M;
    vector<int> arr2(M);
    for(int i = 0; i< M; ++i){
        cin >> arr2[i];
        cout << map[arr2[i]] << ' ';
    }


    
}
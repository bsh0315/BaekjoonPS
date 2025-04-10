// 11866 요세푸스 순열, 자료구조 큐 관련 문제
#include<bits/stdc++.h>
using namespace std;

int main (){
    int N = 0, K = 0;
    cin >> N >> K;
    vector<int> arr(N);
    vector<int> result_arr;

    for(int i = 0; i< N ;  ++i){
        arr[i] = i+1;
    }

    int index = -1, temp = N;
    while(result_arr.size() < N){
        index = (index + K) % temp--;
        result_arr.push_back(arr[index]);
        arr.erase(arr.begin()+index);
        --index;
    }

    cout << '<';
    for(int i = 0; i < N; ++i){
        cout << result_arr[i];
        if(i != result_arr.size() -1){
            cout << ", ";
        }
    }
    cout << '>' << '\n';
    
}
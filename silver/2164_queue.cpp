// 2164 카드 2 자료구조 queue관련 문제.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    queue<int> q;

    for(int i = 1; i<= N; ++i){
        q.push(i);
    }

    while(q.size() > 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front() << '\n';
}
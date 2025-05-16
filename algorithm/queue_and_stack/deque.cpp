// 양방향 큐 예제 코드
// c++ deque 활용.

#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    deque<string> dq2;

    dq.push_front(1);
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';
    dq.push_front(500);
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';
    dq.push_front(200);
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';
    dq.push_front(460);
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';
    
    dq.pop_front();
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';
    
    dq.push_back(65465);
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';

    dq.pop_back();
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';
    dq.pop_front();
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << '\n';
}
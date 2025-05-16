// 백준 18258 큐 2.
/**************
 * 알게된점
 * queue 클래스에서 pop()은 불완전함.
 * 만약 push를 2번하고, pop()을 3번 했을 때
 * size()c는 0이 아니라 이상한 값이 출력됨. 즉 pop()을 할 때는
 * 항상 queue의 size가 0 이상일 때만 실시해야함.
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    string s;
    queue<int> q;
    for(int i = 0; i<n; ++i){
        cin >> s;
        if(s == "push"){
            int num;
            cin >> num;
            q.push(num);
        }
        else if(s == "pop"){
            int num = q.front();
            if(q.size() > 0){
                q.pop();
                cout << num << '\n';
            }
            else{cout << -1 << '\n';}
        }
        else if(s == "size"){
            cout << q.size() << '\n';
        }
        else if(s == "empty"){
            if(q.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(s == "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
            }
        }
        else {
            if(q.empty()){
                cout << -1 << '\n';
            }
            else {
                cout << q.back() << '\n';
            }
        }
    }
}
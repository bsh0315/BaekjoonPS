// 백준 18258 큐 2.
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
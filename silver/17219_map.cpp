#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    map<string, string> map;
    
    for(int i = 0; i<n; ++i){
        string key;
        string value;
        cin >> key >> value;
        map[key] = value;
    }

    for(int i = 0; i<m; ++i){
        string key;
        cin >> key;
        cout << map[key] << '\n';
    }
}
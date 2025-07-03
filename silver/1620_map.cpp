#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    map<int, string> m1;
    map<string, int> m2;

    for(int i = 1; i<=n; ++i){
        string input;
        cin >> input;
        m1.insert({i, input});
        m2.insert({input, i});
    }

    for(int i = 0; i<m; ++i){
        string input;
        cin >> input;
        if(m2.count(input)){
            cout << m2[input] << '\n';
        }
        else{
            int val = stoi(input);
            cout << m1[val] << '\n';
        }
    }

    
}
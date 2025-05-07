#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    map<string, int> m;
    vector<string> result;
    for(int i = 0; i<a; ++i){
        string s;
        cin >> s;
        m[s] = 1;
    }   
    
    for(int i = 0; i<b; ++i){
        string s;
        cin >> s;

        if(m[s] == 1){ // 주의 m[s]를 하면 자동으로 s가 map에 추가됨. 디폴트 값 : 0
            result.push_back(s);
            m[s] = 2;
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for(int i = 0; i<result.size(); ++i){
        cout << result[i] << '\n';
    }
}
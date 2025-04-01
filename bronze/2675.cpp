// 문자열 반복
#include<bits/stdc++.h>
using namespace std;

class s {
    public:
        string s;
        int n = 0;
};

int main(){
    int T = 0;
    cin >> T;
    vector<s> ss(T);
    for(int i = 0; i<T; ++i){
        cin >> ss[i].n >> ss[i].s;
        for (char element : ss[i].s) {
            for (int k = 0; k < ss[i].n; k++) {
                cout << element;
            }
        }
        
        cout << '\n';
    }


}
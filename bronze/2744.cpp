#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size = s.size();
    for(int i = 0; i<size; ++i){
        if( 'a' <= s[i] && s[i] <= 'z'){
            cout << (char)(s[i] - 32);
        }
        else{
            cout << char(s[i] + 32);
        }
    }
}
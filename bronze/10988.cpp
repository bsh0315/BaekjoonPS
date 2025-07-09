#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size = s.size();
    int count = 0;
    for(int i = 0; i<size/2; ++i) {
        if(s[size-i-1] == s[i]){
            ++count;
        }
    }
    if(count == size/2){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
}
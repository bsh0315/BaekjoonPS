#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char arr[5][15] = {};

    for(int i = 0; i < 5; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i < 15; ++i){
        for(int j = 0; j < 5; ++j){
            char c = arr[j][i];
            if(('0' <= c && c <= '9') ||
               ('a' <= c && c <= 'z') ||
               ('A' <= c && c <= 'Z')) {
                cout << c;
            }
        }
    }
}

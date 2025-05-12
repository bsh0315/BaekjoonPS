#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main(){
    string s;
    cin >> s;
    int cnt[26] = {0,};

    for(int i  = 0; i<s.size(); ++i){
            cnt[s[i]-'A']++;
    }

    int odd_count = 0, odd_idx = 0;
    for(int i = 0; i<26; ++i){
        if(cnt[i] % 2 == 1){
            ++odd_count;
            odd_idx = i;
        }

        if(odd_count >= 2){
            cout << "I'm Sorry Hansoo" << endl;
            return 0;
        }
    }

    if(odd_count == 1){
        for(int i = 0; i<26; ++i){
            int x = cnt[i] / 2;
            for(int j = 0; j<x; ++j){
                cout << (char)(i+'A');
            }
        }
        cout << (char)(odd_idx + 'A');
        for(int i = 25; i>=0; --i){
            int x = cnt[i] / 2;
            for(int j = 0; j<x; ++j){
                cout << (char)(i+'A');
            }
        }
    }
    else{
        for(int i = 0; i<26; ++i){
            int x = cnt[i] / 2;
            for(int j = 0; j<x; ++j){
                cout << (char)(i+'A');
            }
        }
        for(int i = 25; i>=0; --i){
            int x = cnt[i] / 2;
            for(int j = 0; j<x; ++j){
                cout << (char)(i+'A');
            }
        }
    }

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int word_num = 0;
    string s;
    getline(cin, s);
    if(s[0] != ' '){
        ++word_num;
    }

    int size = s.length();
    for(int i = 0; i<size; ++i){
        if(s[i] == ' '){
            if(s[i+1] != ' ' && i+1 < size){
                ++word_num;
            }
        }
    }
    cout << word_num << '\n';
}
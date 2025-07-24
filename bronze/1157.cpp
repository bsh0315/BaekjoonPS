#include<bits/stdc++.h>
using namespace std;

int alpha[27] = {0,};

int main(){
    string s;
    cin >> s;
    int size = s.size();

    for(int i = 0; i<size; ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            ++alpha[s[i] - 'a'+1];
        }
        else{
            ++alpha[s[i] - 'A'+1];
        }
    }

    int max = 0;
    int same_cnt = 0;
    int result = 0;
    for(int i = 1; i<=26; ++i){
        if(alpha[i] > max){
            max = alpha[i];
            result = i;
            same_cnt = 0;
        }
        else if(alpha[i] == max){
            ++same_cnt;
            result = 0;
        }
        else{
            continue;
        }
    }

    if(result == 0){
        cout << '?' << '\n';
    }
    else{
        cout << (char)(result+'A'-1) << '\n';
    }

}
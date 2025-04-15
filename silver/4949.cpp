#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(1){
        getline(cin, s, '\n');
        if(s == "."){
            break;
        }
        stack<char> st;

        
        int small_cnt = 0;
        int big_cnt = 0;
        for(int i = 0; i<s.size() ;++i){
            if(s[i] == '('){
                st.push('(');
                ++small_cnt;
            }
            else if(s[i] == ')'){
                st.pop();
                ++small_cnt;
            }
            else if(s[i] == '['){
                st.push('[');
                ++big_cnt;
            }
            else if(s[i] == ']'){
                st.pop();
                ++big_cnt;
            }
            else {
                continue;
            }
        }


        if(st.empty()){
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
    


}
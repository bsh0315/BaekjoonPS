#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tn;
    cin >> tn;
    string s;
    int bit = 0;
    for(int i = 0; i<tn; ++i){

        cin >> s;
        if(s == "add"){
            int x;
            cin >> x;
            bit = bit | (1 << x);
        }
        else if(s == "remove"){
            int x;
            cin >> x;
            bit = bit & ~(1 << x);

        }
        else if(s == "check"){
            int x;
            cin >> x;
            if(bit & (1 << x)){
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if(s == "toggle"){
            int x;
            cin >> x; 
            bit ^= (1 << x);
        }
        else if(s == "all"){
            bit = (1 << 21) -1;
        }
        else{
            bit = 0;
        }
    }
}
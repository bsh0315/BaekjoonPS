#include<iostream>
#include<string>
using namespace std;

int main(){
    while(1){
        string s;
        cin >>  s;
        
        if(s == "0"){
            break;
        }
        int cnt = 2;
        int size = s.size();
        cnt += size-1;
        for(int i = 0; i<size; ++i){
            if(s[i] == '1'){
                cnt += 2;
            }
            else if(s[i] == '0'){
                cnt += 4;
            }
            else{
                cnt += 3;
            }
        }

        cout << cnt << '\n';
    }


}
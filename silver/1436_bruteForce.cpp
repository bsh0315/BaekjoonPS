// 1436 영화감독 숌(브루트 포스 알고리즘)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int count = 0, temp = 0;
    int  i = 0;
    while(count != N){
        temp = i;
        while(temp>0){
            if(temp % 1000 == 666){
                ++count;
                break;
            }  
            else {
                temp /= 10;
            }
        }
        ++i;
    }

    cout << i-1 << '\n'; 
}

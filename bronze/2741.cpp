// 점찍기.
#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n;

    for(int i = 1; i<=n; ++i){
        cout << i << '\n'; 
        // endl을 쓰는것보다 '\n'이 더 빠름.
    }
}
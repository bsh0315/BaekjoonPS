// 설탕 배달
// 브루트 포스 알고리즘, 배달하는 봉지의 최소 개수를 출력함.
// 봉지는 3kg, 5kg 두가지만 있음.

#include<iostream>
using namespace std;


int main(){
    int n = 0, min_count = 2000;
    cin >> n;

    for(int i = 0 ; i<= n/3; ++i){
        for(int j = 0; j<= n/3; ++j){
            if(3*i + 5*j == n && i+j < min_count){
                min_count = i+j;
            }
            
        }
    }
    if(min_count == 2000){
        cout << "-1" << endl;
    }
    else cout << min_count << endl;
}
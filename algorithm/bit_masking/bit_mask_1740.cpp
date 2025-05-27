// 백준 1740번 문제.

/***********************
 * 
 * n을 이진수로 바꿨을 때 각각의 값을 3^0, 3^1 순으로 곱해서 더해나가야됨
 * ex) n = 4 -> 100
 * result = 0 * 3^0 + 0 * 3^1 + 1 * 3^2
 * 
 * 
 * 풀이 방법(2진수를 3진수로 변환함.)
 * 서로 다른 3의 제곱수들 더해 나가야함.
 * => 1 -> 1, 2 -> 10, 3 -> 11, 4-> 100
 * => 이를 이용하면 서로 다른 3의 제곱수들을 가장 작은 값부터 알 수 있음.
 *************************************/
#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    cin >> n;
    unsigned long long val = 1;
    unsigned long long i = 1, size = sizeof(n) * 8, result =0;
    while(i <= size){
        if(n & 1 == 1){
            result += val;
        }
        n >>= 1;
        val *= 3;
        ++i; 
    }   

    cout << result << '\n';

}
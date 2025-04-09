// 2609 최소공배수 최대공약수
#include<bits/stdc++.h>
using namespace std;

#define MIN(x,y) x<y?x:y
int main(){
    int N1 = 0, N2 = 0;
    cin >> N1 >> N2;

    int min = MIN(N1, N2);
    int result1 = 0, result2 = 0;
    for(int i = 1; i<=min; ++i){
        if(N1 % i == 0 && N2 % i == 0){
            result1 = i;
        }
        else {
            continue;
        }
    }

    result2 = result1 * (N1/result1) * (N2/result1);
    cout << result1 << '\n' << result2 << '\n';
}
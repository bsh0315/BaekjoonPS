// 검증수 문제.
#include<bits/stdc++.h>
using namespace std;

#define size 5
int main(){
    int arr[size] = {0,};
    int veryfi_num = 0;
    for(int i = 0; i<size; ++i){
        cin >> arr[i];
        veryfi_num += arr[i]*arr[i];
    }

    veryfi_num %= 10;
    cout << veryfi_num << endl;


}
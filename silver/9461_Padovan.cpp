// 파도반 수열(1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16 ...)
// 새로운 값은 두개의 파도반 수열의 합으로 이루어짐.

// p(100)은 매우 큰 수 이므로 int를 쓰면 오버플로우 발생함.
// 따라서 long long 사용.
#include<iostream>
using namespace std;

long long int get_padovan_num(long long int padovan_arr[], int num){
    for(int i = 0; i< num; ++i){
        if(padovan_arr[i] != 0){
            continue;
        }
        padovan_arr[i] = padovan_arr[i-1] + padovan_arr[i-5];
    }
    return padovan_arr[num-1];
}

int main(){
    long long int padovan_arr[101] = {1,1,1,2,2,3,4,};
    int T = 0;
    cin >> T;
    
    for(int i = 0; i < T; ++i){
        int num = 0;
        cin >> num;
        if(padovan_arr[num-1] != 0){
            cout << padovan_arr[num-1] << endl;
        }
        else {
            long long int result = get_padovan_num(padovan_arr, num);
            cout << result << endl;
        }

    }
}
// 다른 풀이 sort 함수 이용.
#include <bits/stdc++.h>
using namespace std;

#define size 3
int main(){
    while(1){
        int count = 0;
        int arr[size] = {0,};
        for(int i = 0; i<size; ++i){
            cin >> arr[i];
            if(arr[i] == 0){
                ++count;
            }
        }
        if(count == 3){
            exit(0);
        }
        sort(arr, arr+size);
        if(arr[2] * arr[2] == arr[1]*arr[1] + arr[0] * arr[0]){
            cout << "right" << endl;
        }
        else {
            cout << "wrong" << endl;
        }

    }
}
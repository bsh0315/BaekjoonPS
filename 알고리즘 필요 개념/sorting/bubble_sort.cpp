// 기본 버블 정렬 코드
#include<bits/stdc++.h>
using namespace std;

#define size 6
int main(){
    int arr[size] = {1,53,2,3352,63,3};

    for(int i = 0; i<size-1; ++i){
        for(int j = 0; j<size-1; ++j){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }

    for(int i= 0;i<size; ++i){
        cout << arr[i] << ' ';
    }
}
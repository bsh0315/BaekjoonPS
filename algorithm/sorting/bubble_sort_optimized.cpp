// 최적화된 버블 정렬 코드
#include<bits/stdc++.h>
using namespace std;

#define size 6
int main(){
    int arr[size] = {1,53,2,3352,63,3};

    for(int i = 0; i<size-1; ++i){
        bool swapped = false; // 최적화를 위한 변수.
        for(int j = 0; j<size-1 - i; ++j){ 
            // size - 1 -> size -1 -i로 수정.
            // 버블 정렬은 매 반복마다 가장 큰 수가 맨 뒤로 가게 되어있음.
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true; //swap 완료, true로 변경.
            }
        }
        if(!swapped){
            break; // 만약 false가 지속적으로 false 로 유지된다면
                   // 이미 모든 정렬이 완료되어서 swap이 일어나지 않음을 의미함.
        }
    }

    for(int i= 0;i<size; ++i){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}
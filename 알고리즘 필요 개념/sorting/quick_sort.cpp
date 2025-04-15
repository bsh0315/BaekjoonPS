// quick 정렬 기본 코드
// 배열의 맨 마지막 원소를 pivot으로 설정했음.(오름차순)

#include<bits/stdc++.h>
using namespace std;

int partioning(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low -1;
    
    for(int j = low; j<high; ++j){
        if(pivot > arr[j]){ // 내림차순으로 하고싶은면 <로 바꾸기만 하면 됨.
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){ // low < high 일 때까지.
        int p = partioning(arr, low, high); 

        quickSort(arr, low, p-1); 
        // pivot보다 작은 부분들로 재귀적으로 실시.
        quickSort(arr, p+1, high);
        // pivot보다 큰 부분들로 재귀적으로 실시.
    }
    }

 void printArray(int arr[], int size){
    for(int i = 0; i<size; ++i){
        cout << arr[i] << ' ';
    }
    cout << '\n';
 }


int main(){
    int arr[] = {8, 3, 1, 7, 0, 10, 2};
    int size = sizeof(arr)/sizeof(int);

    cout << "이전 배열" << '\n';
    printArray(arr, size);

    quickSort(arr, 0, size -1);

    cout << "정렬 후 배열" << '\n';
    printArray(arr, size);
}
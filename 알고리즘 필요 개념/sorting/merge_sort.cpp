// 병합정렬 기본 코드.
#include<bits/stdc++.h>
using namespace std;

// conquer, 서열정리.
void merge(int arr[], int low, int mid, int high){
    int temp[1000];
    int i = low, j = mid+1, t = 0;
    while(i<= mid && j <= high){ // 배열의 좌측과 배열의 우측을 비교해나감.
        if(arr[i] < arr[j]){
            temp[t++] = arr[i];
            ++i;
        }
        else{
            temp[t++] = arr[j];
            ++j;
        }
    }

    //왼쪽이 전멸
    while(j<=high){
        temp[t++] = arr[j++];
    }

    //오른쪽이 전멸
    while(i<=mid){
        temp[t++] = arr[i++];
    }

    --t; // t를 1만큼 내림으로써 배열 범위를 넘어서 포인팅하지 않도록함.

    // 원본 배열에 값을 복사함.
    while(t>=0){
        arr[low+t] = temp[t]; 
        // 중간 중간에 계속해서 merge가 이루어지기 때문에 low+t임.
        --t; 
    }
}


void mergeSort(int arr[], int low, int high){
    if(low< high){ // 원소가 하나밖에 안남을 때까지 계속 분할함.
        int mid = low + (high - low)/2; //(low+high)/2와 동일함. 오버플로우 방지.
        mergeSort(arr, low, mid); // 전반부 정렬, 분할
        mergeSort(arr, mid+1, high); // 후반부 정렬, 분할
        merge(arr,low, mid, high); // 정복
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; ++i){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main(){
    int arr[] = {4,5,1,3,2};
    int size = sizeof(arr)/sizeof(int);

    mergeSort(arr, 0, size-1);

    printArray(arr, size);
}
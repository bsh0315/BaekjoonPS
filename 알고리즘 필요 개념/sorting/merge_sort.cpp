#include<bits/stdc++.h>
using namespace std;

#define amount 5

// conquer, 서열정리.
void merge(int arr[], int low, int mid, int high){
    int temp[amount];
    int i = low, j = mid+1, t = 1;
    while(i<= mid && j <= high){

    }
}


void mergeSort(int arr[], int low, int high){
    if(low< high){ // 원소가 하나밖에 안남을 때까지 계속 분할함.
        int mid = low + (high - low)/2; //(low+high)/2와 동일함. 오버플로우 방지.
        mergeSort(arr, low, mid); // 전반부 정렬, 분할
        mergeSort(arr, mid, high); // 후반부 정렬, 분할
        merge(arr,low, mid, high); // 정복
    }
}


int main(){
    int arr[amount] = {4,5,1,3,2};
    int size = sizeof(arr)/sizeof(int);

    mergeSort(arr, 0, size-1);
}
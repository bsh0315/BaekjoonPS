// 퀵정렬 최적화 버전.
// pivot 원소를 맨 뒤난 맨 앞의 것이 아닌. 중간의 원소를 선택함.
// 이로써 정렬된 배열을 정렬하는 최악의 경우를 완화 가능.
// 또한, 배열의 크기가 10 미만인 것은 삽입정렬을 통해서 최적화 가능.
#include<bits/stdc++.h>
using namespace std;

int partitioning(int arr[], int low, int high){
    int pivot = arr[(low+high)/2];
    swap(arr[(low+high)/2], arr[high]);
    int i = low -1;
    for(int j = low; j<high; ++j){
        if(pivot > arr[j]){
            swap(arr[++i], arr[j]);
        }
    }
    if(i+1 != high){  // i+1과 high가 같은경우는 swap x
        swap(arr[high], arr[i+1]);
    }
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){ // 정렬할 범위가 1개 이하거나 값이 뒤집어지면 정렬하면 안됨.
                    // 재귀의 종료조건.
        int p = partitioning(arr, low, high);

        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
    
}

// 삽입정렬
void insertSort(int arr[], int size){
    for(int i = 1; i<size; ++i){
        int key = arr[i];
        int j = i -1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            --j; 
        }
        if(j+1 != i){ // 이미 key 정렬된 제자리에 있음해도 또 이동시키는 것을 방지함.
            arr[j+1] = key; 
            // 앞에서 --j에 의해 값이 감소했으므로 1 증가    
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; ++i){
        cout << arr[i] << ' ';
    }
    cout << '\n';

}


int main() {
    int arr[] = {8,3,1,7,0,10,2};
    int size = sizeof(arr)/sizeof(int);

    if(size <= 1){
        cout << "정렬 전 배열" << '\n';
        printArray(arr, size);
        insertSort(arr, size);
        cout << "삽입 정렬 후 배열" << '\n';
        printArray(arr, size);
        return 1;
    }

    cout << "이전 배열" << '\n';
    printArray(arr, size);

    quickSort(arr, 0, size-1);

    cout << "정렬 후 배열" << '\n';
    printArray(arr, size);

}
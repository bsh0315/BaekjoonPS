// 퀵정렬 최적화 버전 test
#include<bits/stdc++.h>
using namespace std;

int partitioning(int arr[], int low, int high){
    int pivot = arr[(low+high)/2];
    swap(arr[high], arr[(low+high)/2]); 
    int i = low -1;
    for(int j = low; j<high; ++j){
        if(arr[j] < pivot){
            ++i;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;

}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int p = partitioning(arr, low, high);
        
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }

}
void insertSort(int arr[], int size){
    for(int i = 1; i<size; ++i){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; ++i){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {8,3,1,7,0,10,2};
    int size = sizeof(arr)/sizeof(int);
    
    if(size <= 10){
        cout << "정렬 전 배열" << '\n';
        printArray(arr, size);
        insertSort(arr, size);
        
        cout << "삽입 정렬 후 배열" << '\n';
        printArray(arr, size);
        return 1;
    }

    cout << "정렬 전 배열" << '\n';
    printArray(arr, size);

    quickSort(arr, 0, size-1); 
    
    cout << "퀴 정렬 이후 배열" << '\n';
    printArray(arr, size);
}
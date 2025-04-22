#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr, int size){
    for(int i = 0; i<size; ++i){
        cout << arr[i] << ' ';
    }

    cout << '\n';
}


void merge(vector<int> &arr, int low, int mid, int high, int& count, int k){
    int temp[500001];
    int i = low,  j = mid+1, t = 0;

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            temp[t++] = arr[i++];
        }
        else{
            temp[t++] = arr[j++];
        }
    }

    // 왼쪽 전멸
    while(j <= high){
        temp[t++] = arr[j++];
    }

    // 오른쪽 전멸
    while(i <= mid){
        temp[t++] = arr[i++];
    }

    i = low,  t = 0;
    // 원본에 복사
    while(i <= high){
        arr[i++] = temp[t++];
        ++count; 
        if(count == k){
            printArray(arr, arr.size());
            exit(0);
        }
    }
}

void mergeSort(vector<int> &arr, int low, int high, int& count, int k){
    if(low < high){
        int mid = low + (high - low)/2;

        mergeSort(arr, low, mid, count, k);
        mergeSort(arr, mid +1, high , count, k);
        merge(arr, low, mid, high, count, k);
    }
}


int main(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    int size = arr.size();

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    int count = 0;
    mergeSort(arr, 0, size -1, count, k);

   if(count < k){
        cout << -1 << '\n';
   }

}
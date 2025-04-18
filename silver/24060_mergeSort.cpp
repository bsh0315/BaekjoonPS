#include<bits/stdc++.h>
using namespace std;
bool done = false;

void merge(vector<int>& arr, int low, int mid, int high, int& count, int t){
    int temp[high +2]; // 반드시 vector가 아닌 배열로 할당. 생각보다 할당 비용이 매우 큼.
    int i = low, j = mid+1, k = 0;

    // 서로 경쟁
    while(i<= mid && j <= high){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    // 왼쪽 전멸인 경우.
    while(j<= high){
        temp[k++] = arr[j++];
    }

    // 오른쪽 전멸인 경우.
    while(i<=mid){
        temp[k++] = arr[i++];
    }

    i = low, k = 0;
    while(i<=high){
        arr[i++] = temp[k];
        ++count;
        if(count  == t){
            cout << temp[k] <<'\n';
            done = true;
            return;
        }
        ++k;
    }
}

void mergeSort(vector<int>& arr, int low, int high, int& count, int t){
    if(low < high){
        int mid = low+ (high-low)/2;

        mergeSort(arr, low, mid, count, t);
        mergeSort(arr, mid+1, high, count, t);
        merge(arr,low, mid, high, count, t);
    }
}

void printArray(vector<int> arr, int size){
    for(int i = 0; i< size ;++i){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> arr(n);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    int count = 0;
    mergeSort(arr, 0, n-1, count, t);
    

    if(t > count){
       cout << -1 << '\n'; 
    }
    //printArray(arr, n);
}
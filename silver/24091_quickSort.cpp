#include<bits/stdc++.h>
using namespace std;

int partitioning(vector<int> &arr, int low, int high,int &count, int k){
    int pivot = arr[high];
    int j = low -1;
    for(int i = low; i<high; ++i){
        if(arr[i] <= pivot){
            ++j;
            swap(arr[i],arr[j]);
            ++count;
                if(count == k){
                    return 0;
                }
        }
    }
    if(j+ 1 != high){
        swap(arr[high], arr[j+1]);
        ++count;
        if(count == k){
            return 0;
        }
    }
    
    
    return j+1;
}

void quickSort(vector<int> &arr, int low, int high, int &count, int k){
    if(low < high && count != k){
        int p = partitioning(arr, low, high, count, k);

        quickSort(arr, low, p-1, count, k);
        quickSort(arr, p+1, high, count, k);
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }
    
    int count = 0;
    quickSort(arr, 0, n-1,count, k);

    if(count < k){
        cout << -1 << '\n';
    }
    else{
        for(int i = 0; i<n; ++i){
            cout << arr[i] << ' ';
        }
    
        cout << '\n';
    }
    
}

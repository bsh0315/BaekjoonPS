#include<bits/stdc++.h>
using namespace std;

int insertionSort(vector<int> &arr, int size, int& count, int k){
    for(int i = 1; i<size; ++i){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            ++count;
            if(count == k){
                return arr[j];
            }
            --j;
        }
        if(j+1 != i){
            arr[j+1] = key;
            ++count;
            if(count == k){
                return key;
            }
        }
        
    }
    return -1;
}

int main(){
    int n,k;
    cin >> n >> k;
    int count = 0;

    vector<int> arr(n);

    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    int result = insertionSort(arr, n, count, k);

    cout << result << '\n';


}
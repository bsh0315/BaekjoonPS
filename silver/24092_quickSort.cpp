#include<bits/stdc++.h>
using namespace std;


void check_sameArr(vector<int> &arr1, vector<int> &arr2, int &flag){
    if(arr1 == arr2){
        flag = 1;
    }
    return;
}

int partitioning(vector<int> &arr1, vector<int> &arr2, int low, int high, int& flag){
    int pivot = arr1[high];
    int i = low -1;
    for(int j = low; j<high; ++j){
        if(arr1[j] < pivot){
            swap(arr1[j], arr1[++i]);
            check_sameArr(arr1, arr2, flag);
            if(flag == 1){
                return 0;
            }
        }
    }
    if(i+1 != arr1[high]){
        swap(arr1[high], arr1[i+1]);
        check_sameArr(arr1, arr2, flag);
        if(flag == 1){
            return 0;
        }
    }
    return i+1;
}

void quickSort(vector<int> &arr1, vector<int> &arr2, int low, int high, int& flag){
    if(low < high){
        int p = partitioning(arr1, arr2, low, high, flag);

        quickSort(arr1, arr2, low, p-1, flag);
        quickSort(arr1, arr2, p+1, high, flag);
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    
    for(int i = 0; i<n; ++i){
        cin >> arr1[i];
    }

    for(int i = 0; i<n; ++i){
        cin >> arr2[i];
    }

    int flag = 0;
    quickSort(arr1, arr2, 0, n-1, flag);
    
    if(flag == 1){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
}
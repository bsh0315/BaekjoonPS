// 음계.
#include<iostream>
#include<vector>
using namespace std;

#define size 8

int main(){
    vector<int> arr(size);
    
    for(int i = 0; i< size; ++i){
        cin >> arr[i];
    }
    int aflag = 0, dflag = 0;
    for(int i = 0; i<size-1; ++i){
        if(arr[i+1] > arr[i]){
            aflag += 1;
        }
    }

    for(int i = 0; i<size-1; ++i){
        if(arr[i+1] < arr[i]){
            dflag += 1;
        }
    }

    if(aflag == size-1){
        cout << "ascending" << '\n';
    }
    else if(dflag == size-1){
        cout << "descending" << '\n';
    }
    else {
        cout << "mixed" << '\n';
    }
}
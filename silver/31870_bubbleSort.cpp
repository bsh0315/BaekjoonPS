// 버블 정렬 이용.
#include<bits/stdc++.h>
using namespace std;

void bubbleSort1(vector<int> arr, int size, int &count1){

    for(int i = 0; i<size -1; ++i){
        bool swapped = false;
        for(int j = 0; j<size -1 -i; ++j){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                ++count1;
                swapped = true;
            }
        }
        if(!swapped) {break;}
    }
}

void bubbleSort2(vector<int> arr, int size, int &count2){
    
    for(int i = 0; i<size -1; ++i){
        bool swapped = false;
        for(int j = 0; j<size -1 -i; ++j){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                ++count2;
                swapped = true;
            }
        }
        if(!swapped) {break;}
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    int count1 = 0, count2 = 0;
    for(int i = 0; i< n; ++i){
        cin >> arr[i];
    }

    bubbleSort1(arr, n, count1);
    bubbleSort2(arr, n, count2);

    if(count1 < count2+1){
        cout << count1 << '\n';
    }
    else {cout << count2+1 << '\n';}
}
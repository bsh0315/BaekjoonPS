// 1920 수찾기, 정렬 및 이분탐색 문제.
#include<bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int> &arr1, int size, int value){
    int left = 0, right = size - 1;
    while(left <= right){
        int mid = (left+right)/2;
        if(arr1[mid] == value){
            return 1;
        }
        else if(arr1[mid] > value){
            right = mid -1;
        }
        else{
            left = mid + 1;
        }
    }
    return 0;
}

int main(){
    int N = 0, M = 0;
    cin >> N;

    vector<int> arr1(N);
    for(int i = 0; i< N; ++i){
        cin >> arr1[i];
    }
    
    
    cin >> M;
    vector<int> arr2(M);
    for(int i = 0; i < M; ++i) {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    for(int i = 0; i< M; ++i){
        cout <<  binarySearch(arr1, arr1.size(), arr2[i]) << '\n';
    }
}
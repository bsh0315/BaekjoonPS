#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
int n;

void Solution(int start, int end){
    if(start >= end){
        return;
    }
    int i;
    for(i = start; i<end; ++i){
        if(arr[start] < arr[i]){
            break;
        }
    }

    Solution(start+1, i);
    Solution(i, end);
    cout << arr[start] << '\n';
}

int main(){

    while(cin >> n){
        arr.push_back(n);
    }

    Solution(0, arr.size());
}
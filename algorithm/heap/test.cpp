#include<bits/stdc++.h>
using namespace std;

int pop(vector<int> &arr){
    if(arr.empty()){
        cout << 0 << '\n';
        return 0;
    }
    int size = arr.size() -1;
    int root = arr[0];
    int child = size -1;
    while(1){
        
    }
}

void push(vector<int> &arr, int input){

}

int main(){
    int tn;
    cin >> tn;
    vector<int> arr;

    for(int i = 0; i<tn; ++i){
        int x;
        cin >> x;
        if(x == 0){
            int result = pop(arr);
            cout << result << '\n';
        }
        else{
            push(arr, x);
        }
    }
}
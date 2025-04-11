#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int N = 0, temp = 0;
    cin >> N;
    int arr[10000] {0,};

    for(int i = 0; i<N; ++i){
        cin >> temp;
        ++arr[temp-1];
    }

    for(int i = 0; i<10000; ++i){
        while(arr[i] > 0){
            cout << i+1 << '\n';
            --arr[i];
        }
        
    }
}
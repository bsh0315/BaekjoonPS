#include<iostream>
using namespace std;

int fibo[41]  = {0,1,};
int fibonacci(int n) {

    if(n == 1 || n == 0){
        return fibo[n];
    }
    else if(fibo[n] == 0){
        fibo[n] = fibonacci(n-1) + fibonacci(n-2); 
    }
    return fibo[n];
}

int main(){
    int n = 0;
    cin >> n;
    int *arr = new int[n];

    for(int i = 0; i<n ;++i){
        cin >> arr[i];
        if(arr[i] == 0){
            cout << '1' << ' ' << '0' << endl;
        }
        else {
            cout << fibonacci(arr[i]-1) << ' ' << fibonacci(arr[i]);
        }
    }

    
}

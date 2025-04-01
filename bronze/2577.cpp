// 숫자의 개수
#include<iostream>
using namespace std;

#define size 10

int main(){
    int arr[size] = {0,};
    int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;
    int value = A*B*C;

    for(int i = 0; i< size; ++i){
        int temp = value;
        while(temp != 0){
            if(temp % size == i){
                ++arr[i];
            }
            temp /= 10;
        }
    }

    for(int i = 0; i<size; ++i){
        cout << arr[i] << '\n';
    }
}
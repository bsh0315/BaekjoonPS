// 직각삼각형 판단.

#include<iostream>
using namespace std;
#define   MAX(a, b) ((a) > (b) ? (a) : (b))
#define   LITTLE(a, b) ((a) > (b) ? (b) : (a))
int main(){
    int a = 1, b = 1, c= 1;
    while(1){
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0){
            exit(0);
        }
        int max_num = MAX(MAX(a,b),c);
        int little_num = LITTLE(LITTLE(a,b),c);
        int middle_num = a + b + c - max_num - little_num;

        if(max_num * max_num == little_num * little_num + middle_num * middle_num){
            cout << "right" << endl;
        } 
        else {cout << "wrong" << endl;}
    }
}
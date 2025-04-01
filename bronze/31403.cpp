// A+B-C.

#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    int count = 0, temp = b;
    while(temp!= 0){
        ++count;
        temp /= 10;
    }

    temp  =a;
    for(int i = 0; i<count; ++i){
         temp*= 10;
    }
    cout << a+b-c << '\n';
    cout << temp+b-c << '\n';

}
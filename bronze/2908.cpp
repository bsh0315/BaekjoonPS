#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int temp1= 0, temp2 = 0, mult = 100;

    for(int i = 0; i<3; ++i){
        
        temp1 += a%10 *mult;
        temp2 += b%10 *mult;
        a /= 10;
        b /= 10; 
        mult /= 10;
    }

    if(temp1 > temp2){
        cout << temp1 << '\n';
    }
    else{
        cout << temp2 << '\n';
    }

}
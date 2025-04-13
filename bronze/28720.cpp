#include<bits/stdc++.h>
using namespace std;

#define size 3

int main(){
    vector<string> arr1(size);
    vector<int> arr2(size, 0);

    for(int i = 0; i<size; ++i){
        cin >> arr1[i];
        try {
            arr2[i] = stoi(arr1[i]);
        }   catch(invalid_argument&) {
                continue;
            }
        
    }
    
    int next = 0;
    for(int i = 0; i< size ;++i) {
        if(arr2[i] != 0){
            if(i == 0){
                next = arr2[i] + 3;
            }
            else if(i == 1){
                next = arr2[i] + 2;
            }
            else {
                next = arr2[i] + 1;
            }
        }
        else{
            continue;
        }
        

    }

    if(next % 3 == 0 && next % 5 ==0){
        cout << "FizzBuzz" << '\n';   
    }
    
    else if(next % 3 == 0 && next % 5 !=0){
        cout << "Fizz" << '\n';   
    }
    else if(next % 3 != 0 && next % 5 ==0){
        cout << "Buzz" << '\n';   
    }
    else{
        cout << next << '\n';   
    }
}
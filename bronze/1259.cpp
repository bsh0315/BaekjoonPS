#include<bits/stdc++.h>
using namespace std;

#define size 5

int main(){
    int N = 1;
    vector<int> ele_arr(size);

    while(1){
        int ele_size = 0, count = 0;
        cin >> N;
        if(N == 0){
            exit(0);
        };
        for(int i = 0; i< size; ++i){
            ele_arr[i] = N%10;
            ++ele_size;
            N /= 10;
            if(N == 0){
                break;
            }
        }

        for(int i = 0; i<ele_size/2+1; ++i){
            if(ele_arr[i] == ele_arr[ele_size - i-1]){
               ++count;
            }
            else{
                break;
            }
        }
        
        if(ele_size == 1){
            cout << "yes" << '\n';
        }
        else if(count == ele_size/2+1){
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
    
}
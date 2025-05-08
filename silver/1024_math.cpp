#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    int pivot, distance, sum, value;
    for(int i = l; i<=100; ++i){
        pivot = n / i;
        distance = i/2;
        sum = 0;
        if(i % 2 == 0){
            for(int j = pivot - distance + 1; j <= pivot + distance; ++j){
                sum += j;
                if(j < 0){
                    break;
                }
            }

            if(sum == n){
                for(int j = pivot - distance + 1; j <= pivot + distance; ++j){
                    cout << j << ' ';
                }
                return 0;    
            }
        }

        
        else{
            for(int j = pivot - distance; j <= pivot + distance; ++j){
                sum += j;
                if(j < 0){
                    break;
                }
            }

            if(sum == n){ 
                for(int j = pivot - distance; j <= pivot + distance; ++j){
                    cout << j << ' ';
                }
                return 0;
            }
        } 
        if(i >= 100){
            cout << -1 << '\n';
            return 0;
        }
               
    }

}
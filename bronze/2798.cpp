#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0, M = 0;
    cin >> N >> M;

    vector<int> cards(N);
    for(int i = 0; i<N; ++i){
        cin >> cards[i];
    }
    
    int value = 0;
    for(int i = 0; i<N; ++i){
        for(int j = i+1; j<N; ++j){
            for(int k = j+1; k<N; ++k){
                int temp = cards[i] + cards[j] + cards[k];
                if(temp > value && temp <=M){
                    value = temp;
                }
            }
        }
    }

    cout << value << '\n';

}
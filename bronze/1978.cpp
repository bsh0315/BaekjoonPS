// 1978 소수찾기
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    vector<int> num_arr(N);

    for(int i = 0; i<N; ++i){
        cin >> num_arr[i];
    }

    int prime_count = 0;
    for(int i = 0; i<N; ++i){
        int count = 0;
        for(int j = 2; j<=num_arr[i]; ++j ){
            if(num_arr[i]%j == 0){
                ++count;
            }
        }
        if(count == 1){
            ++prime_count;
        }
    }
    cout << prime_count << '\n';
}
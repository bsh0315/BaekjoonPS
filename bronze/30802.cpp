#include<bits/stdc++.h>
using namespace std;

#define size 6

int main(){
    int N = 0; //사람 수
    vector<int> size_arr(size); // 사이즈 종류
    int T = 0, P = 0; // T : 티셔츠 한 묶음당 장수 , P : 펜 한묶음당 몇개인지.
    int sum_T = 0, sum_P = 0, rest_P = 0;
    cin >> N;
    cin.ignore();
    for(int i = 0; i<size ;++i){
        cin >> size_arr[i];
    }
    cin.ignore();
    cin >> T >> P;

    //티셔츠 수 구하기.
    for(int i = 0 ; i<size; ++i){
        if(size_arr[i]%T == 0){
            sum_T += size_arr[i]/T;
        }
        else{
            sum_T += size_arr[i]/T+1;
        }   
    }

    //펜 수 구하기.
    sum_P = N/P;
    rest_P = N%P;

    cout << sum_T << '\n';
    cout << sum_P << ' ' << rest_P << '\n';
}
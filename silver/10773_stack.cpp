// 10773 제로(자료구조, stack 관련 문젠젠)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int K = 0 ;
    cin >> K;
    vector<int> num_arr(K);
    vector<int> result_arr;
    for(int i = 0; i<K ; ++i){
        cin >> num_arr[i];
        if(num_arr[i] == 0){
            result_arr.pop_back();
        }
        else{
            result_arr.push_back(num_arr[i]);
        }
    }

    int sum = 0;
    for(int i = 0; i<result_arr.size(); ++i){
        sum += result_arr[i];
    }

    cout << sum << '\n';

}
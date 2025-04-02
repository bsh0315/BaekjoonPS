// OX 퀴즈

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size = 0;
    cin >> size;
    vector<pair<string, int>> s_arr(size);
    

    for(int i = 0; i<size; ++i){
        cin >> s_arr[i].first;
    }
    int sum = 0;
    for(int i = 0; i<size; ++i){
        int count = 0, sum = 0;
        for(int j = 0; j<s_arr[i].first.size(); ++j){
            if(s_arr[i].first[j] == 'O'){
                ++count;
            }
            else{
                count = 0;
            }
            sum += count;
        }
        s_arr[i].second = sum;
    }
    
    for(int i = 0; i<size; ++i){
        cout << s_arr[i].second << '\n';
    }
}
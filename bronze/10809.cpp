// 알파벳 찾기.
#include<bits/stdc++.h>
using namespace std;

#define size_alpha 'z'-'a'+1
int main(){
    string s;
    int arr[size_alpha];
    fill(arr, arr + size_alpha, -1); // 초기값을 -1로 설정
    cin >> s;

    for(int i = 0; i<s.size(); ++i){
        for(int j = 'a'; j<= 'z'; ++j){
            if(s[i] == j){
                int temp = i;
                    if(arr[j-'a'] != -1){
                        continue;
                    }
                    else{
                        arr[j-'a'] = temp;
                    }
                }
            }  
        }

        
        for(int i = 0; i<size_alpha; ++i){
            cout << arr[i] << ' ';
        }
        
    }

    



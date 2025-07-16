#include<bits/stdc++.h>
using namespace std;

bool Check(vector<int>& snack_len, int n, int m, int mid){
    int cnt = 0;
    for(int i = 0; i<m; ++i){
        cnt += snack_len[i] / mid;
    }

    if(cnt >= n){return true;}
    else{return false;}
}

int Search(vector<int>& snack_len, int n , int m){
    int low = 1, high = *max_element(snack_len.begin(), snack_len.end());
    int result = 0;
    while(low <= high){
        int mid = low + (high- low)/2;
        if(Check(snack_len, n, m, mid)){
            result = mid;
            low = mid +1;
        }
        else{
            high = mid -1;
        }

    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> snack_len(m);

    for(int i = 0; i < m; ++i){
        cin >> snack_len[i];
    }

    cout << Search(snack_len, n, m) << '\n';
}
#include<bits/stdc++.h>
using namespace std;

bool Check(vector<int>& day, int n, int m, int mid){
    int cnt = 1, k = mid;
    for(int i = 0; i<n; ++i){
        if(k < day[i]){
            k = mid;
            ++cnt;
        }
        if(cnt > m){
            return false;
        }
        k = k - day[i];
    }
    return true;
}

int Search(vector<int>& day, int n, int m){
    int low = *max_element(day.begin(), day.end()), high = 10000;
    int k = 0;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(Check(day, n, m, mid)){
            high = mid -1;
            k = mid;
        } 
        else{
            low = mid + 1;
        }

    }

    return k; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> day(n);

    for(int i = 0; i<n; ++i){
        cin >> day[i];
    }

    cout << Search(day, n, m) << '\n';

}
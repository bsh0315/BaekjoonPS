#include<bits/stdc++.h>
using namespace std;

bool Check(vector<int>& country, int n, int m, int mid){
    int sum = 0;
    for(int i = 0; i<n; ++i) {
        if(country[i] >= mid ){
            sum += mid;
        }
        else{
            sum += country[i];
        }
    }

    return sum <= m;
}

int Search(vector<int>& country, int n, int m){
    int high = *max_element(country.begin(), country.end());
    int low = 1;
    int result;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(Check(country, n , m, mid)){
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
    cin >> n;
    vector<int> country(n);
    
    for(int i= 0;i<n; ++i){
        cin >> country[i];
    }
    cin >> m;

    cout << Search(country, n, m) << '\n';

}
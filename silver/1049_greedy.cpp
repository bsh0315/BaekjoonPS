#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> arr1(m);

    int minFirst = INT_MAX, minSecond = INT_MAX;
    for(int i = 0; i<m; ++i){
        cin >> arr1[i].first >> arr1[i].second;
        if(arr1[i].first < minFirst){
            minFirst = arr1[i].first;
        }
        if(arr1[i].second < minSecond){
            minSecond = arr1[i].second;
        }
    }

    int quo = n/6, rest = n%6;
    int result = quo * minFirst + rest * minSecond;
    if((quo+1) * minFirst < result){
        result = (quo+1) * minFirst;
    }
    if(n * minSecond < result){
        result = n * minSecond; 
    }

    cout << result << '\n';


}
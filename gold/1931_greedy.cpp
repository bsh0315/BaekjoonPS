// 그리디 알고리즘. 
// 한 강의실 내에 최대한 많은 강의를 집어넣는 문제.
/*****************************
 * 퓰이법 : 강의가 끝나는 순서대로 정렬해결함.
 */

#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> arr(n);
    
    for(int i = 0; i<n; ++i){ 
        cin >> arr[i].x >> arr[i].y; 
    }

    sort(arr.begin(), arr.end(), [](const auto a, const auto b){
        if(a.y == b.y){
            return a.x < b.x;
        }
        return a.y < b.y;
    });

    int count = 0;
    int second_val = 0;

    for(int i = 0; i<n; ++i){
        if(second_val <= arr[i].y &&  second_val <= arr[i].x){
            second_val = arr[i].y;
            ++count;
        }
    }
    cout << count << '\n';
}
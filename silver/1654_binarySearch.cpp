// 이분탐색 , 매개변수 탐색 이용.
// int형을 쓰게되면 sum을 누적할 때 매우 큰값이 들어갈 수도 있기때문에 틀림.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll K = 0 , N = 0;
    cin >> K >> N;
    vector<int> arr(K);

    for(ll i = 0; i<K; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    ll left = 1, right = arr[K-1], result = 0;
    while(left <= right){
        ll mid = (left+right)/2;
        ll sum = 0;
        for(ll i = 0; i<K; ++i){
            sum += arr[i]/mid;
        }
        
        if(sum >= N){
            result = mid;
            left = mid + 1;
        }

        else {
            right = mid -1;
        }
    }

    cout << result << '\n';

}
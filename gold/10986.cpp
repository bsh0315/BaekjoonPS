// 10986 나머지 합, 수열의 합 이용.
/***********
 * ex) 1 2 3 1 2
 * sum -> 1 3 6 7 9
 * 각각의 누적합을 3으로 나머지 연산.
 * -> 1 0 0 1 0
 * 이 수들을 arr(m,0)에다가 인덱스에 맞춰서 집어넣음
 * 인덱스가 0인 경우에는 해당 원소 혼자만 있어도 3의 배수이므로
 * arr[0]을 나중에 따로 더함.
 * 이후 조합을 이용하여 3C2, 2C2 이런식으로 계산한후 더해나감.
 */
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long  n, m, x;
    long long  sum = 0;
    cin >> n >> m;
    vector<long long> arr(m, 0);
    long long  result = 0;

    for(int i = 0; i < n; ++i){
        cin >> x;
        sum += x;
        arr[sum % m]++;
    }

    for(int i = 0; i < m; ++i){
        result += (arr[i]*(arr[i]-1))/2;
    }

    cout << arr[0] + result << '\n';
}

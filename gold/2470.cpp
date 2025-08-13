#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> num(n);

    for(int i = 0; i<n; ++i){
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    int start = 0, end = n-1;
    int idx_1 = 0, idx_2 = n-1;
    int min = INT_MAX;

    while(start < end){
        int temp = num[start] + num[end];
        int cmp_temp = abs(temp);

        if(cmp_temp < min){
                min = cmp_temp;
                idx_1 = start, idx_2 = end;
            }

        if(temp < 0){
            ++start;
        }
        else if(temp > 0){
            --end;
        }
        else{
            break;
        }
    }

    cout << num[idx_1] << ' ' << num[idx_2] << '\n';
}
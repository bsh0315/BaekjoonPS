// LIS에서 길이 뿐만이 아닌 해당 배열도 출력하는 코드.

/*********
 * 예제 입력 : 
 * 6
 * 10 20 10 30 20 50
 * 
 * 예제 출력 :
 * 4
 * 10 20 30 50 
 *************/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> cnt(n,1);
    vector<int> pre(n, -1);
    
    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<i; ++j){
            if(arr[i] > arr[j] && cnt[i] < cnt[j] + 1){
                cnt[i] = cnt[j] + 1; 
                pre[i] = j;
            }
        }
    }

    int max_idx = distance(cnt.begin(), max_element(cnt.begin(), cnt.end()));
    cout << cnt[max_idx] << '\n';

    stack<int> st;
    int cur_idx = max_idx;
    while(cur_idx != -1){
        st.push(arr[cur_idx]);
        cur_idx = pre[cur_idx];
    }

    while(st.size() != 0){
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n';

}
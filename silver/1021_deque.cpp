#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i = 0; i<m; ++i){
        cin >> arr[i];
    }

    deque<int> dq;
    for(int i = 1; i<=n; ++i){
        dq.push_back(i);
    }

    int count = 0;
    for(int i = 0; i<m; ++i){
        int idx, size = dq.size(); // idx : arr 원소와 dq원소가 일치하는 원소 저장. 
        while(1){
            for(int j = 0; j<size; ++j){
                if(dq[j] == arr[i]){
                    idx = j;
                }
            }
            if(idx == 0){ // dq의 첫번째 원소인 경우.
                dq.pop_front();
                break;
            }
            else if(idx <= size/2 ){
                int temp = dq.front();
                dq.pop_front();
                dq.push_back(temp);
                ++count;
            }
            else{
                int temp = dq.back();
                dq.pop_back();
                dq.push_front(temp);
                ++count;
            }   
        }
    }
    cout << count << '\n';
}
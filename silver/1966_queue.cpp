// 백준 1966 우선순위 큐 활용 문제.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    for(int i = 0; i<t; ++i){
        int ipt = 0, count = 0;
        cin >> n >> m;
        queue<pair<int,int>> q;
        priority_queue<int> pq;

        for(int j = 0; j<n; ++j){
            cin >> ipt;
            q.push({j, ipt});
            pq.push(ipt);
        }

        while(q.size() >0){
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if(value == pq.top()){
                ++count;
                pq.pop();
                if(index == m){
                    cout << count << '\n';
                    break;
                }
            }
            else{
                q.push({index, value});
            }
        }
    }



}
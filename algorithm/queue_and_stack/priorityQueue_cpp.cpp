// 백준 1966 우선순위 큐 활용 문제.
/***
 * 우선순위 큐는 일반적인 큐와는 다름.
 * 또한, 우선순위 큐의 내부는 heap 자료구조로 되어있음.
 * 기본 자료구조 : 최대 힙.
 * 우선순위큐(priority_queue)에서
 * top()함수는 우선순위가 가장 높은 것을 뱉어냄.
 * 기본적으로 수가 클수록 우선순위가 높음. 
 */
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
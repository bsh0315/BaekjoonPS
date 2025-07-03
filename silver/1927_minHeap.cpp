#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, zero_count = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> min_pq;
    
    while(n--){
        int input;
        cin >> input;
        
        if(input == 0){
            if(min_pq.empty()){
                cout << 0 << '\n';
            }
            else{
                cout << min_pq.top() << '\n';
                min_pq.pop();
            }

        }
        else{
            min_pq.push(input);
        }
    }

}
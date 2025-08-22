#include<bits/stdc++.h>
using namespace std;

int ans;

bool Valid(int data, bool visit[]){
    if(data < 0 || data > 100000 || visit[data]) {
        return false;
    }   
    return true;
}

void BFS(int n, int& k, queue<pair<int,int>>& q, bool visit[]){
    while(!q.empty()){
        int depth = q.front().second;
        int data = q.front().first;
        q.pop();
        if(data == k){
            ans = depth;
            break;
        }

        if(Valid(data+1, visit)){
            visit[data+1] = true;
            q.push({data+1, depth+1});
        }

        if(Valid(data-1, visit)){
            visit[data-1] = true;
            q.push({data-1, depth+1});
        }
        
        if(Valid(data * 2, visit)){
            visit[data * 2] = true;
            q.push({data * 2, depth+1});
        }
        
    }

}

int main(){
    int n, k;
    cin >> n >> k;
    bool visit[100001]= {0,};
    queue<pair<int, int>> q;

    visit[n] = true;
    q.push({n, 0});
    BFS(n, k, q, visit);

    cout << ans << '\n';
}
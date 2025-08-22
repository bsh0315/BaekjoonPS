#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n*n);
    int size = n*n;
    int sum = 0;
    for(int i = 0; i<size; ++i){
        int input; 
        cin >> input;
        
        sum += input;
        arr[i] = sum;
    }

    int x1, y1, x2, y2;
    for(int i =0; i<m; ++i){
        cin >> x1 >> y1 >> x2 >> y2;
        int result = 0;
        for(int i = x1; i<= x2; ++i){
            if(x1 == 1 && y1 == 1){
                result = arr[(x2-1) + y2 -1];
                break;
            }
            result += arr[(i-1)*n +y2 -1] - arr[(i-1)*n +y1 -2];
        }

        cout << result  << '\n';
    }
    
}
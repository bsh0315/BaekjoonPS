// 매개변수 탐색 이용
#include<bits/stdc++.h>
using namespace std;


bool canMake(vector<long long>& tree, long long mid, long long n, long long m){
    long long sum = 0;
    for(int i = 0; i<n; ++i){
        if(tree[i] > mid){
            sum += tree[i] - mid; 
        }
    }

    return sum >= m;
}

int search(vector<long long>& tree, long long n, long long m){
        long long low = 0, high = *max_element(tree.begin(), tree.end());
        long long ans = 0;
        while(low <=high){
            long long mid = low +(high-low)/2;
            if(canMake(tree, mid, n, m)){
                ans = mid;
                low = mid +1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;
    vector<long long> tree(n);

    for(int i = 0; i<n; ++i){
        cin >> tree[i];
    }


    long long result = search(tree, n, m);
    cout << result << '\n';    

}
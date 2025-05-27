#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> train(n, 0);
    int order = 0;

    for(int i = 0; i<m; ++i){
        int order, n_tr, n_person;
        cin >> order; 


        switch(order){
            case 1: 
                cin >> n_tr >> n_person;
                train[n_tr-1] |= (1 << (n_person-1));
                break;

            case 2:
                cin >> n_tr >> n_person;
                train[n_tr-1] &= ~(1 << (n_person-1));
                break;

            case 3:
                cin >> n_tr;
                train[n_tr-1] = (train[n_tr-1] << 1) & ((1 << 20) - 1);
                break;

            case 4:
                cin >> n_tr;
                train[n_tr-1] >>=1;
                break;
            
            default: 
                break;
        }
    }

    unordered_set<int> s(train.begin(), train.end());
    cout << s.size() << '\n';
    
}
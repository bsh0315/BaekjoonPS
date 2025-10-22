#include<bits/stdc++.h>
using namespace std;

char L[27], R[27];

void preOrder(char root){
    if(root == '.'){
        return;
    }
    cout << root;
    preOrder(L[root- 'A']);
    preOrder(R[root- 'A']);
}

void inOrder(char root){
    if(root == '.'){
        return;
    }
    inOrder(L[root- 'A']);    
    cout << (char)root;
    inOrder(R[root- 'A']);
}

void postOrder(char root){
    if(root == '.'){
        return;
    }
    postOrder(L[root- 'A']);
    postOrder(R[root- 'A']);
    cout << root;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for(int i = 0; i<n; ++i){
        char a, b, c;
        cin >> a >> b >> c;
        L[a-'A'] = b;
        R[a-'A'] = c;
    }

    preOrder('A');
    cout << '\n';
    inOrder('A');
    cout << '\n';
    postOrder('A');
    cout << '\n';
    


}
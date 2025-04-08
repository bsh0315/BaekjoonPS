#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    vector<double> scores(N);

    for(int i = 0; i< N ; ++i){
        cin >> scores[i];
    }
    
    double max = *max_element(scores.begin(), scores.end());
    double sum = 0;
    for(int i = 0; i<N ; ++i){
        scores[i] = scores[i]/max*(double)100;
        sum += scores[i];
    }


    cout << (double)sum/N << '\n';

}
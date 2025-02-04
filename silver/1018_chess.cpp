// 체스판의 패턴을 알아내는 것이 중요함.
/*
0  1  2  3  4  5  6  7
1  2  3  4  5  6  7  8
2  3  4  5  6  7  8  9
3  4  5  6  7  8  9 10
4  5  6  7  8  9 10 11
5  6  7  8  9 10 11 12
6  7  8  9 10 11 12 13
7  8  9 10 11 12 13 14
=> 체스판의 규칙
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;


int main(){
    int N = 0, M = 0;
    string str;

    cin >> N >> M;
    vector<string> chess(N);

    for(int i = 0; i< N; ++i){
        cin >> chess[i];
    }

    int min_cost = INT_MAX;
    

        for(int i = 0; i<= N -8; ++i){
            for(int j = 0; j <= M-8; ++j){
                char pivot = chess[i][j];
                int count_1 = 0;
                int count_2 = 0;

                for(int p = i; p < i + 8; ++p){
                    for(int q = j; q < j + 8; ++q){
                        char current = chess[p][q];
                        if((p+q) % 2 == 0){
                            if(current != pivot){++count_1;}
                            else{++count_2;}
                            
                        }
                        else{
                            if(current == pivot){++count_1;}
                            else {++count_2;}
                    }
                }
                int current_min = min(count_1, count_2);
                min_cost = min(min_cost, current_min);
            }
        }
    }
        cout << min_cost;



}
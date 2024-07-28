// 1417 국회의원 선거 문제
// 벡터의 첫번째 원소를 제외한 나머지 원소(후보)들의 표 개수를 비교해서 제일 큰 것을 우선 찾는것이 포인트임
// 이후 제일 큰 것으로부터 표를 하나씩 첫번째 원소로 가져온다.
#include<iostream>
#include<vector>
using namespace std;

int maxNum(vector<int> stuVec, int stuNum){
    int max = 1;
    for(int i =2 ; i<stuNum; ++i){
        if(stuVec[max] < stuVec[i])
            max = i;
    }
    return max;
}

int main(){
    int stuNum = 0, count = 0;
    cin >> stuNum;

    vector<int> stuVec(stuNum); 
    for(int i = 0 ; i < stuNum; ++i){
        cin >> stuVec[i];
    }

    while(1){
        int max = maxNum(stuVec, stuNum);
            if(stuVec[0] <= stuVec[max]){
                stuVec[max]--;
                stuVec[0]++;
                count++;
            }
            max = maxNum(stuVec, stuNum);
            if(stuVec[0] > stuVec[max])
                break;
    }
    cout << count << endl;
    
}
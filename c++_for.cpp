#include<iostream>
#include<vector>
using namespace std;

#define size 5
int main(){
    vector<int> arr(size);

    // 만약 다음과 같은 for문 형식을 통해서 값을 입력할려면
    // 반드시 &를 붙여야함. &가 없으면 element은 단순한 복사본임.
    
    for(int &element : arr){
        cin >> element;
    }

    for(int element: arr){
        cout << element << '\n';
    }

}
// ACM 호텔.
#include<iostream>
#include<vector>
using namespace std;

class hotel{
    public:
        int H = 0;
        int W = 0;
        int N = 0;

        void get_number(){
            cin >> H >> W >> N;
        }
};

int main(){
    int T = 0;
    cin >> T;
    vector<hotel> hotels(T);

    for(int i = 0; i<T; ++i){
        double num1 = 0, num2 = 0;
        hotels[i].get_number();
        num1 = hotels[i].N / hotels[i].H;
        num2 = hotels[i].N % hotels[i].H;
        if(num1 > int(num1)){
            num1 += 1;
        }
        if(num2 == 0){
            num1 -= 1;
            num2 = hotels[i].H;
        }
        
        cout << num2*100 + (int)num1+1 << '\n';
    }
    

}
// 터렛 문제
// 두 지점으로부터의 각각의 반경으로 생성되는 두 원간의 교점의 개수가 중요함.

#include<iostream>
#include<cmath>
using namespace std;

class Turret{
    private:
        int x1, y1, r1;
        int x2, y2, r2;
    public:
        void get_circle() {
            cin >> x1 >> y1 >> r1;
            cin >> x2 >> y2 >> r2;
        }
        // 두 원의 중심 사이의 거리를 구하는 함수
        double get_distance(){
            return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        }
        
        // 두 원의 교점 개수를 판별하는 함수 
        int get_intersec_num(double distance){
            if (distance == 0 && r1 == r2) {
                return -1;  // 무한히 많은 교점 (완전히 일치)
            }
            else if (abs(r1 + r2 - distance) < 1e-9 || abs(abs(r1 - r2) - distance) < 1e-9) {
                return 1;  // 외접 or 내접
            }
            else if (abs(r1 - r2) < distance && distance < r1 + r2) {
                return 2;  // 두 점에서 만남
            }
            else {
                return 0;  // 만나지 않음
            }
        }
            
};

int main(){
    int n = 0;
    cin >> n;
    cin.ignore();

    Turret* pairs = new Turret[n];

    for(int i = 0; i<n ; ++i){
        pairs[i].get_circle();
        double dis_value = pairs[i].get_distance();
        cout << pairs[i].get_intersec_num(dis_value) << endl;
        }
    delete[] pairs;
}

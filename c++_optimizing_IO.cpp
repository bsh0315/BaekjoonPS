#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    // C의 stdio(scanf/printf)와 C++의 iostream(cin/cout) 동기화 끊기 
    // → 속도 향상
    /* ************* 
        C++의 cin/cout은 내부적으로 C의 scanf/printf와 공유되는 버퍼를 갖고 있어요.
        이 둘이 같이 쓰이면 충돌할 수 있으므로, C++은 **기본적으로 동기화(synchronize)**를 설정해요.
        이 동기화는 → 안전하지만 느려요.
    ****************** */

    cin.tie(nullptr);
    //cin과 cout의 연결을 끊음.
    /*****************
     * 기본적으로 cin은 cout과 묶여 있습니다 (tie 상태)
    즉, cin을 호출하면 먼저 cout.flush()를 강제로 호출해서  
    출력 버퍼를 먼저 비웁니다.
    ************/ 
    cout.tie(nullptr);
    // 출력을 많이 할 때 최적화해줌.
}

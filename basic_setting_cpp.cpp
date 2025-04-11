// 알고리즘 대회에서 쓰기좋은 기본 세팅들

#include<bits/stdc++.h> 
// 대부분의 표준 라이브러리를 포함.

#define x first 
#define y second
//pair에서 자주 쓰이느 first, second를 짧게 쓰기 위함.

#define all(V) v.begin(), v.end()
// 전체 범위를 넘길 때 자주 쓰는 패턴을 매크로로 만듦

#define compress(v) sort(all(V)),v.erase(unique(all(v), v.end()))
// 좌표 압축을 위한 매크로
// sort(all(v)) : 정렬
// unique(all(v)) : 중복 제거
// erase(..., v.end()) : 실제로 중복 원소 제거.

using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> count(8001, 0); // -4000 ~ 4000 (인덱스 보정 필요)
    // count(8001, 0); 에서 8001은 원소의 개수, 0은 모든 원소를 0으로 초기화함.
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
        count[arr[i] + 4000]++; // 등장한 정수값들의 횟수를 셈.

    }

    sort(arr.begin(), arr.end());

    // 1. 평균 (round)
    double mean = (double)sum / n;
    if (mean >= 0) mean = mean + 0.5;
    else mean = mean - 0.5;

    // 2. 중앙값
    int median = arr[n / 2];

    // 3. 최빈값
    int max_freq = *max_element(count.begin(), count.end());
    // 등장한 값들 중에서 가장 많이 등장한 값을 max_freq에 저장함.
    vector<int> modes;
    for (int i = 0; i < 8001; ++i) {
        if (count[i] == max_freq) {
            modes.push_back(i - 4000); // 인덱스 보정
        }
    }

    int mode = (modes.size() >= 2 ? modes[1] : modes[0]);

    // 4. 범위
    int range = arr[n - 1] - arr[0];

    // 출력
    cout << (int)mean << '\n' << median << '\n' << mode << '\n' << range << '\n';
}

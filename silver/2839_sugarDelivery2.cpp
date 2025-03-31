// 2839 설탕배달
// 내가 기존에 짠 코드보다 시간복잡도가 낮음.

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int min = 5000;
	int bag3 = 0;
	int bag5 = 0;

	while (n > 0) {
		bag3 = n / 3;
		if (n % 3 == 0 || n % 5 == 0) {
			if (bag3 + bag5 < min) {
				min = bag3 + bag5;
			}
		}
		n -= 5;
		bag5++;
	}

	if (min == 5000)	cout << -1;
	else				cout << min;

	return 0;
}
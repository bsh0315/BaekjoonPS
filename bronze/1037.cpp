#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> divisors(n);

    for (int i = 0; i < n; ++i) {
        cin >> divisors[i];
    }

    int min_val = *min_element(divisors.begin(), divisors.end());
    int max_val = *max_element(divisors.begin(), divisors.end());

    cout << min_val * max_val << '\n';

    return 0;
}

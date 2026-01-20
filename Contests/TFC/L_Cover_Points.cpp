#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        sum = max(sum, a + b);
    }

    cout << sum << endl;

    return 0;
}
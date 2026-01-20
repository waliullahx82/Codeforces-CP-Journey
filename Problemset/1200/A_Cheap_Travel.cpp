#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    float x = b / (float)m;

    if (a <= x)
        cout << (n * a);
    else
    {
        int res = n / m;
        int rem = n % m;
        if (rem * a > b)
        {
            cout << res * b + b;
        }
        else
            cout << res * b + rem * a;
    }
    return 0;
}
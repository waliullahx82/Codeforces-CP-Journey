#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n % x != 0)
            cout << 1 << endl
                 << n << endl;
        else
        {
            if (n % 2 == 0)
            {
                if ((n / 2) % x == 0)
                    cout << 2 << endl << (n / 2) + (x + 1) << " " << (n / 2) - (x + 1) << endl;
                else
                    cout << 2 << endl << n / 2 << " " << n / 2 << endl;
            }
            else{
                cout << 2 << endl << n - x + 1 << " " << x - 1 << endl;
            }
        }
    }

    return 0;
}
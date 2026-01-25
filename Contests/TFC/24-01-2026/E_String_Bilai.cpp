#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        int one = 0, zero = 0;

        for (size_t i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '1')
                one++;
            else
                zero++;
        }

        if (one == 0)
            cout << 0 << endl;
        else if (zero == 0)
        {
            if (one % 2 == 0)
                cout << one << endl;
            else
                cout << -1 << endl;
        }
        else if (zero % 2 == 0)
        {
            if (one % 2 != 0)
                cout << -1 << endl;
            else
                cout << one << endl;
        }
        else
        {
            if (one % 2 == 0)
                if (one < zero)
                    cout << one << endl;
                else
                    cout << zero << endl;
            else cout << zero << endl;
        }
    }

    return 0;
}
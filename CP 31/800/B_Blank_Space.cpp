#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = 0, maxZero = 0;
        for (size_t i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 0)
            {
                total++;
                maxZero = max(maxZero,total);
            }
            else
                total = 0;
        }
        cout << maxZero << endl;
    }

    return 0;
}
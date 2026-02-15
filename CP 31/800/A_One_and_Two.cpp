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
        int arr[n];
        int two = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
                two++;
        }

        if (two == 0)
            cout << 1 << endl;
        else if (two % 2 == 0)
        {
            int k = two / 2;
            int j;
            for (int i = 0; i < n; i++)
            {
                if (k == 0)
                {
                    j = i;
                    break;
                }
                if (arr[i] == 2)
                    k--;
            }
            cout << j << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
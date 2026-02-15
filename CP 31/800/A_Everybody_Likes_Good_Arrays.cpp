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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int operation = 0;
        int parity = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] % 2 == arr[i - 1] % 2)
            {
                operation++;
            }
        }

        cout << operation << endl;
    }

    return 0;
}
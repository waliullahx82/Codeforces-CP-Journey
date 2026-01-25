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
        long long arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
            cout << n - arr[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
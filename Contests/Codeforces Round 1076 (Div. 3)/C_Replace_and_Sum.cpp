#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        long long arr[n];
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long arrB[n];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arrB[i] = arr[i] > temp ? arr[i] : temp;
        }

        for (int i = n - 1; i > 0; i--)
        {
            if(arrB[i]>=arrB[i-1]) arrB[i-1] = arrB[i];
        }

    
        long long arrC[n];
        arrC[0] = arrB[0];
        for (int i = 1; i < n; i++)
            arrC[i] = arrC[i - 1] + arrB[i];

        while (q--)
        {
            long long l, r;
            cin >> l >> r;

            long long sum;
            if (l == 1)
                sum = arrC[r - 1];
            else
                sum = arrC[r - 1] - arrC[l - 2];

            cout << sum << " ";
        }
        cout << endl;
    }

        return 0;
    }
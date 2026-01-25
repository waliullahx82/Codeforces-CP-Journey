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

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        cin >> arr[i];
        
        sort(arr.begin(), arr.end());


        vector<long long> arr2(n);
        for (int i = 0; i < n; i++)
            cin >> arr2[i];


        vector<long long> arr3(n + 1, 0);       
        for (int i = 0; i < n; i++)
            arr3[i + 1] = arr3[i] + arr2[i];


        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long x = arr[i];
            long long usable = n - i;
            
            int levels = upper_bound(arr3.begin(), arr3.end(), usable) - arr3.begin() - 1;

            ans = max(ans, x * levels);
        }

        cout << ans << endl;
    }

    return 0;
}

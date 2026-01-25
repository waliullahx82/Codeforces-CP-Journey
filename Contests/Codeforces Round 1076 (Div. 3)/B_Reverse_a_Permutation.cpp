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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> arr2(n);
        arr2[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            arr2[i] = max(arr2[i + 1], arr[i]);
        }      
        bool done = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < arr2[i])
            {
                int mx = arr2[i];
                int r = -1;
                for (int j = n - 1; j > i; j--)
                {
                    if (arr[j] == mx)
                    {
                        r = j;
                        break;
                    }
                }
                reverse(arr.begin() + i, arr.begin() + r + 1);
                done = true;
                break;
            }
        }
        for (size_t i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}

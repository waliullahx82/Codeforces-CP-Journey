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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max = arr[0];
        int j = 1;
        while ((arr[j] < x) && j < n)
        {
            if ((arr[j] - arr[j-1]) > max)
                max = arr[j] - arr[j-1];
            j++;
        }

        if (max < ((2 * (x - arr[j-1]))))
        {
            max = 2 * (x - arr[j-1]);
        }

        cout << max << endl;
    }
    return 0;
}
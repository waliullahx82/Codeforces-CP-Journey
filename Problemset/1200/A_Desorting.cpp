#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int different = INT_MAX;
        bool firstTime = true;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (firstTime)
            {
                firstTime = false;
            }
            else
            {
                int temp = arr[i] - arr[i - 1];
                if (temp < different)
                    different = temp;
            }
        }

        if (different < 0)
            cout << 0 << endl;
        else
        {
            cout << (different / 2) + 1 << endl;
        }
    }
    return 0;
}

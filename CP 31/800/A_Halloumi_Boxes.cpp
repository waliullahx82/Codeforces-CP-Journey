#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, k;
        cin >> size >> k;

        vector<int> arr(size);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        vector<int> temp = arr;

        sort(temp.begin(), temp.end());

        if (temp == arr || k >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
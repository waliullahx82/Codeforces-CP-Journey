#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    bool possible = false;
    while (l < r)
    {
        int sum = a[l].first + a[r].first;

        if (sum == x)
        {
            cout << a[l].second << " " << a[r].second << endl;
            possible = true;
            break;
        }
        else if (sum < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    if (!possible)
        cout << -1 << endl;
    return 0;
}
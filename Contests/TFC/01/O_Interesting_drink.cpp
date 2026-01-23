#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> shop(n);

    for (int i = 0; i < n; i++)
        cin >> shop[i];

    int m;
    cin >> m;
    int arr[m];

    for (int i = 0; i < m; i++)
        cin >> arr[i];

    sort(shop.begin(), shop.end());
    for (int i = 0; i < m; i++)
    {

        auto it = upper_bound(shop.begin(), shop.end(), arr[i]);
        cout << (it - shop.begin()) << "\n";
    }


    return 0;
}


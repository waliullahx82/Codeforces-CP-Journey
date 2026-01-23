#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cost = 0;
        vector<int> v(n);
        for (int i=0;i<n;i++)
            cin >> v[i];
        sort(v.begin(),v.end());
        int r = v.size() - 1;
        int l = 0;
        while (l<=r)
        {
            cost += v[r] - v[l];
            r--;
            l++;
        }
        

        

        cout << cost << endl;
    }

    return 0;
}
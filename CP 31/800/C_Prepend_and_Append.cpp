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
        string s;
        cin >> s;

        int l = 0, r = s.size() - 1;
        int len = s.size();
        while (l < r)
        {
            if (s[l] != s[r])
            {
                len -= 2;
                l++;
                r--;
            }
            else
                break;
        }

        cout << len << endl;
    }
    return 0;
}
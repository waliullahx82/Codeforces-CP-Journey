#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = 0, p = 0;
        for (size_t i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == -1)
                m++;
            else
                p++;
        }
        bool positive = m % 2 == 0 ? true : false;
        if (positive && p >= m)
            cout << 0 << endl;
        else if (!positive && p >= m)
            cout << 1 << endl;
        // else if (positive && p < m)
        // {
        //    if((m-p)/2 == 0) cout << (m-p)/2 << endl;
        //    else cout << (m-p)/2+1 << endl;
        // }
        else
        {
            int diff = n - p;
            if ((diff / 2) % 2 == 0)
            {
                if (!positive)
                    cout << diff / 2 + 1 << endl;
                else
                    cout << diff / 2 << endl;
            }
            else
            {
                if (positive)
                    cout << diff / 2 << endl;
                else
                    cout << diff / 2 + 2<< endl;
            }
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (m < (n - 1) || m > (n * (n - 1) / 2))
        {
            cout << "NO" << endl;
        }
        else
        {

            int x;
            if (n == 1)
            {
                if (k > 1) cout << "YES" << endl;
                else cout << "NO" << endl;
            } 

            else if (m == (n * (n - 1) / 2))
            {
                if (k > 2) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else {
                if (k > 3) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
    return 0;
}

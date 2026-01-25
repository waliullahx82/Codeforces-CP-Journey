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
        int count = 0;
        while (m>p || m%2==1)
        {
            m--;
            p++;
            count++;
        }
        cout << count << endl;
        
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 10;

        int sum = 0;

        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {
                    int temp;
                    int a = i + 1, b = j + 1;
                    if (a > 5)
                        a = 11 - a;
                    if (b > 5)
                        b = 11 - b;

                    temp = a < b ? a : b;
                    sum += temp;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int n = 10;

    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            int a = i + 1, b = j + 1;
            if(a > 5) a = 11 - a;
            if(b > 5) b = 11 - b;
            
                temp = a < b ? a : b;

            cout << temp << " ";
        }
        cout << endl;
    }

    return 0;
}
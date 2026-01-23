#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    cout << fixed << setprecision(10);

    while (t--)
    {
        int swimmers, boat;
        cin >> swimmers >> boat;

        int distance, spS, spB;
        cin >> distance >> spS >> spB;

        if (boat >= swimmers)
        {
            if (spB > spS)
                cout << (double)distance / spB << endl;
            else
                cout << (double)distance / spS << endl;
        }
        else{
            
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum ^= a;
        }

        
        if (n % 2 == 0){
            if (sum == 0)
            cout << 0 << endl;
            else
            cout << -1 << endl;}
            else{
                cout << sum << endl;
            }
    }
}
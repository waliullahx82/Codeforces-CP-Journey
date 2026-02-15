#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int a,b,n;
       cin >> n >> a >> b ;
       if(a+b+2 <= n || (a==b && n==a)) cout << "Yes" << endl;
       else cout << "No" << endl;
        
    }
    return 0;
}
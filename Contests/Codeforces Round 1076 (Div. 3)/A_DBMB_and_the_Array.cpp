#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,s,x;
        cin >> n >> s >> x;
        long long total = 0;
        for (size_t i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            total += temp;
        }
        if(total > s) cout << "NO" << endl;
        else if((s-total)%x==0) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}
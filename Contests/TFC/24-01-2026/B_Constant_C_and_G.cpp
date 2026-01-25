#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;

    // cout << fixed << setprecision(0) << endl;
    while (t--)
    {
        int len,h,m,s;
        cin >> len >> h >> m >> s;
        cout << dec << 300000000/len << " " << 9.8/len;
    }
    

    return 0;
}
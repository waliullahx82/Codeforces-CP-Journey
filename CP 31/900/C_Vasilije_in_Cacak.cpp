#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k,x;
        cin >> n >> k >> x;

        long long maxSum = (k * (n + n - k + 1)) / 2;
        long long minSum = ((1 + k) * k) / 2;

        if(maxSum < x) cout << "NO" << endl;
        else if(minSum > x) cout << "NO" << endl;
        else
            cout << "YES" << endl;
        
              
        
    }
    

    return 0;
}
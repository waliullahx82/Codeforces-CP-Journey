#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,n;
        cin >> a >> b >> n;   
        long long sum = b;           
        for (long long i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            sum += min(temp,a-1);
        }

        cout << sum << endl;
        stack<int >s;
        s.emplace()
    }
    

    return 0;
}
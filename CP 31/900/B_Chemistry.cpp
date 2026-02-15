#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        string x;
        cin >> a >> b >> x;
        vector<int>arr(26,0);
        for (int i = 0; i < a; i++)
        {
            arr[x[i]-'a']++;
        }

        int odd=0;
        for (int i = 0; i < 26; i++)
        {
            if(arr[i]%2!=0) odd++;
        }

        if(odd-b<=1) cout << "YES" << endl;
        else cout << "NO" << endl;

        
    }
    

    return 0;
}
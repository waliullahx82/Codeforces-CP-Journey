#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool possible = false;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(gcd(arr[i],arr[j]) <= 2) possible = true;
            }
            
        }

        if(possible) cout << "Yes" << endl;
        else cout << "No" << endl;
        
        
    }
    
 
 
    return 0;
}
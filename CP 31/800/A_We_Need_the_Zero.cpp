#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int Xor = 0;
        int arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
            Xor ^= arr[i];
        }

        if(n%2==0 && Xor != 0) cout << -1 << endl;
        else cout << Xor << endl;

        
    }
    

    return 0;
}
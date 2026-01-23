#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m >> n;
        if(m %2 !=0) m++;
        if(n %2 !=0) n--;

        cout << ((n - m ) / 2) + 1 << endl;
    }

    return 0;
    
}
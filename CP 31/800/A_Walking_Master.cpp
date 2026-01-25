#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;

        if(b > d) cout << -1 << endl;
        else if((a + d - b) >= c) cout << (d-b+ a+(d-b)-c) << endl;
        else cout << -1 << endl;
    }
    

    return 0;
}
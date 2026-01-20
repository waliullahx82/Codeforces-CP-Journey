#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string sub = "...";

        if (s.find(sub) != string::npos)
        {
            cout << 2 << endl;
        }
        else
        {
            int x = 0;
            for(int i=0;i<n;i++){
                if(s[i]=='.') x++;
            }
            cout << x << endl;
        }
    }

    return 0;
}
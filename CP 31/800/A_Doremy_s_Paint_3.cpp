#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int v1 = -1, v2 = -1, c1 = 0, c2 = 0;

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (v1 == -1 || v1 == temp)
            {
                v1 = temp;
                c1++;
            }
            else if (v2 == -1 || v2 == temp)
            {
                v2 = temp;
                c2++;
            }
            else{
                possible = false;
            }
        }

        if(v2==-1 ||possible && (abs(c1-c2)<2)){
            cout << "Yes" << endl;
        }else cout << "No" << endl;
    }

    return 0;
}
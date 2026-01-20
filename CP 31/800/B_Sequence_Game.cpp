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

        vector<int> vec;
        int reserve = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp < reserve)
            {
                vec.push_back(temp);
            }
            vec.push_back(temp);
            reserve = temp;
        }

        cout << vec.size() << endl;

        for(auto i:vec){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
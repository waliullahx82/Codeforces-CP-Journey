#include <iostream>
#include <set>
using namespace std;

int main()
{
    int maxLvl;
    cin >> maxLvl;

    set<int> arr;
    int p, q;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        arr.insert(temp);
    }

    if (arr.size() == maxLvl)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
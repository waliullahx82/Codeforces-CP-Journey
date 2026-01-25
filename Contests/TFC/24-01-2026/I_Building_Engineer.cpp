#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> arr)
{

    return arr;
}

int main()
{
    int t;
    cin >> t;

    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int count = 1;
    int h=0;
    while (count != t)
    {

        sort(arr.begin(), arr.end());
        for (int i = t - 1; i >= 0; i--)
        {

            int temp = arr[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (temp / 2 >= arr[j]){

                    i = j + 1;
                    arr[j] = 0;
                    count++;
                }
            }
        }
        h++;
    }

    cout << h;

    return 0;
}
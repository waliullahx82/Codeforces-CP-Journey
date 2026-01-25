#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> arr(3);
    for (size_t i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    cout << arr[2] - arr[0];
    
    return 0;
}
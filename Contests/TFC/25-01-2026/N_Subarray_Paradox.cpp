#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; 
    cin >> t;
    set<long long> arr;
    for (size_t i = 0; i < t; i++)
    {
        long long a;
        cin >> a;
        arr.insert(a);
    }

    int size = arr.size();
    long long checker = 0;
    for(auto it = arr.begin();it!=arr.end();it++){
        if(*it != ++checker)
            break;
    }

    cout << checker;
    
    return 0;
}
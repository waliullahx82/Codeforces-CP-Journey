#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    set<long long> arr;
    bool zero = false, neg = false;
    for (size_t i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        if(n<0) neg =true;
        else if(n==0) neg = true;
        arr.insert(n);
    }
    if(zero && !neg) cout << arr.size() - 1;
    else cout << arr.size();
    
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long m,n;
    cin >> m >> n;
    long long arr[m];

    
    long long sum = 0;
    for (size_t i = 0; i < m; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int ratio = arr[0];
    for(int i=1;i<m;i++){
        ratio = gcd(ratio, arr[i]);
    }

    sum = sum / ratio;

    cout << (n / sum )* sum << endl;
    

    return 0;
}
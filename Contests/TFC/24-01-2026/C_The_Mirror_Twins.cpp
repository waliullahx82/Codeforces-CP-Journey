#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    long long t; 
    cin >> t;
    long long root = sqrt(t);
    cout << root;
    if(root * root != t) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
    }
    return 0;
}
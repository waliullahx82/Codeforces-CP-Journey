#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long x = pow(2,n);
    cout << 2*(x-1);

    return 0;
}
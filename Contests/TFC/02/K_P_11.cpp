#include <bits/stdc++.h>
using namespace std;

int decTOBin(long long n)
{

    string bin = "";
    while (n > 0)
    {
        char c = char('0' + (n % 2));
        bin.insert(bin.begin(), c);
        n /= 2;
    }
    
    return stoi(bin);
}

int main()
{
    long long n;
    cin >> n;

    string bin;
    cin >> bin;

    long long target = decTOBin(n);

    long long k = stoi(bin);
    long long count = 0;
    while (k > target)
    {
        bin.pop_back();
        k = stoi(bin);
        count++;
    }
    cout << count << endl;

    return 0;
}
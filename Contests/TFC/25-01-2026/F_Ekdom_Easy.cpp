#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    int i = a.size() - 1;
    int j = b.size() - 1;
    int k = c.size() - 1;

    vector<char> sum;
    int carry = 0;

    while (i >= 0 || j >= 0 || k >= 0 || carry)
    {
        int p = (i >= 0) ? a[i--] - '0' : 0;
        int q = (j >= 0) ? b[j--] - '0' : 0;
        int r = (k >= 0) ? c[k--] - '0' : 0;

        int total = p + q + r + carry;
        sum.push_back(char('0' + (total % 10)));
        carry = total / 10;
    }

    reverse(sum.begin(), sum.end());
    for (char ch : sum) cout << ch;
    cout << endl;

    return 0;
}

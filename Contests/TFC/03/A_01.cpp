#include <iostream>
#include<string>
using namespace std;
int main()
{
   string a,b;
   cin >> a >> b;

   char x = a.back();
    int m = x - '0';

    char y = b.back();
    int n = y - '0';

   if((m+n)%2==0)cout << "Black" << endl;
   else cout << "White" << endl; 
    return 0;

    return 0;
}
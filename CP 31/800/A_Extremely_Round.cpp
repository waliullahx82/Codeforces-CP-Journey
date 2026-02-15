#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int x =n.size()-1;
        int a = n[0] - '0';
        cout << a+9*x <<endl;
    }
    
 
 
    return 0;
}
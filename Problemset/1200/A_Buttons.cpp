#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t; 
    while (t--)
    {
        int Anna, Kaite, Both;
        cin >> Anna >> Kaite >> Both;

        if(Both % 2 == 1) Anna++;

        if(Anna > Kaite) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main(){
    int day,month,year;
    scanf("%2d/%2d/%4d",&day,&month,&year);

    
    vector<string> mon = {" ","January","February","March","April","May","June","July","August","September","October","November","December"};

    bool leapYear = false;
    if(year%400==0 || (year%100!=0 && year%4==0)) leapYear = true;
    
    if(1000 > year || year > 9999 || 1 > month || month > 12 || 1 > day) cout << -1;
    else if(month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12){
        if(day > 0 && day < 32) cout << mon[month];
        else cout << -1;
    }
    else if(month ==4||month == 6||month == 9||month == 11){
        if(day > 0 && day < 31) cout << mon[month];
        else cout << -1;
    }
    else if(leapYear &&  day > 29) cout << -1;
    else if(!leapYear && day >28) cout << -1;
    else cout << mon[month];

    return 0;
}
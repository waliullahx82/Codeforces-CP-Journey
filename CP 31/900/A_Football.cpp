#include <bits/stdc++.h>
int main(){
    std::string s; std::cin >> s;
    std::cout << (s.find("1111111")!=std::string::npos || s.find("0000000")!=std::string::npos ? "YES" : "NO");}

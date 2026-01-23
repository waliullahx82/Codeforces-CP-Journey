#include<iostream>
#include<vector>
using namespace std;

int main(){
    string arr;
    cin >> arr;
    int n = arr.size();

    for(int i=0;i<n;i++){
        if(arr[i]=='0') cout << 1;
        else cout << 0;
    }
    

    return 0;
}
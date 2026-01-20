#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int min = INT_MAX;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;

        temp = abs(temp);
        if(temp < min) min = temp;
    }

    cout << min << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    long long arr[t];
    for (size_t i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < t-2; i++)
    {
        for (size_t j = i+2; j < t; j++)
        {
            if(arr[i]*arr[i] + arr[i+1]*arr[i+1] < arr[j]*arr[j]) count++;
        }
        

    }
    cout << count << endl;
    
     
    return 0;
}
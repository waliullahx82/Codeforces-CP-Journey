#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    bool witness = true;

    for (int i = 0;i<n;i++)
    {
        if(arr[i] == "LIE"){
            witness = !witness;
        }
    }

    if(witness) cout << "TRUTH" << endl;
    else cout << "LIE" << endl;
    

    return 0;
}
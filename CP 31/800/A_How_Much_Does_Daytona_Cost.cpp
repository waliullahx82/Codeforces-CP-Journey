#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> vec(n);
        
        bool possible = false;
        for(int i=0;i<n;i++){
            cin >> vec[i];
            if(vec[i]==k) possible = true;
        }

        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}
#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m >> n;
        string x,s;
        cin >> x >> s;
        
        bool found = false;
        int step = 0;
        for(int i=0;i<=5;i++){
            
            size_t pos = x.find(s);
            if(pos != string::npos){
                found = true;
                break;
            }
            x.append(x);
            step++;
        }
        
        if(found) cout << step <<endl;
        else cout << -1 << endl;
    }
    
}
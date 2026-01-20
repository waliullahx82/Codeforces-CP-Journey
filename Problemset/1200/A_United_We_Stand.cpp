#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
            cin >> vec[i];
             
        sort(vec.begin(),vec.end());

        vector<int> v1 = {-1};
        vector<int> v2;

        for(auto i:vec){
            if(v1[0]==-1){
                v1.pop_back();
                v1.push_back(i);
            }
            else if(vec[0]==i) 
                v1.push_back(i);
            else 
            v2.push_back(i);            
        }

        if(v2.empty()) cout << -1 << endl;
        else{
            cout << v1.size() << " " << v2.size() << endl;
            for(auto i : v1) cout << i << " ";
            cout << endl;
            for(auto i : v2) cout << i << " ";
            cout << endl;
            
        }
    }
    
    return 0;
}
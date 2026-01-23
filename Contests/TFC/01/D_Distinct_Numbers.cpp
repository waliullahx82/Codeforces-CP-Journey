#include<iostream>
#include<set>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    set<int> arr;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.insert(temp);
    }

    cout << arr.size() << endl;
    

    return 0;
}
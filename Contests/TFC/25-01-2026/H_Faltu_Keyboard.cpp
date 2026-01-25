#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while (t--)
    {
        int arr[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        string word;
        cin >> word;
        for (int i = 0; i < word.size(); i++)
        {
            int x = word[i] - 'a';
            for (int j = 0; j < arr[x]; j++)
            {
                cout << word[i];
            }
            arr[x]++;
               
        }
        cout << endl;
        

        
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        int kingX, kingY;
        cin >> kingX >> kingY;
        int QueenX, QueenY;
        cin >> QueenX >> QueenY;

        int dx[4] = {1,-1,1,-1};
        int dy[4] = {1,1,-1,-1};
        set<pair<int , int>> moveK, moveQ;
        for (int i = 0; i < 4; i++)
        {
            moveK.insert({kingX + dx[i] * a, kingY + dy[i] * b});   
            moveK.insert({kingX + dx[i] * b, kingY + dy[i] * a});  

            moveQ.insert({QueenX + dx[i] * a, QueenY + dy[i] * b});   
            moveQ.insert({QueenX + dx[i] * b, QueenY + dy[i] * a});   
        }


        int ans = 0;
        for(auto pos : moveK)
            if(moveQ.find(pos) != moveQ.end()) ans++;
        
        cout << ans << endl;
    }
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<vector<int>> dp(n, vector<int>(7, INF));

        // Base case
        for (int v = 1; v <= 6; v++) {
            dp[0][v] = (a[0] == v ? 0 : 1);
        }

        // Fill DP
        for (int i = 1; i < n; i++) {
            for (int v = 1; v <= 6; v++) {
                for (int u = 1; u <= 6; u++) {

                    // must be adjacent faces
                    if (v != u && v != 7 - u) {
                        dp[i][v] = min(dp[i][v],
                                       dp[i-1][u] + (a[i] == v ? 0 : 1));
                    }
                }
            }
        }

        int ans = INF;
        for (int v = 1; v <= 6; v++)
            ans = min(ans, dp[n-1][v]);

        cout << ans << "\n";
    }
}

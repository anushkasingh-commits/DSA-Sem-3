#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n, vector<int> (n));
    for (int l = 0; l < n; l++) {
        int mini = INT_MAX;
        for (int r = l; r < n; r++) {
            mini = min(mini, a[r]);
            dp[l][r] = mini;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << dp[l][r] << endl;
    }
    return 0;
}
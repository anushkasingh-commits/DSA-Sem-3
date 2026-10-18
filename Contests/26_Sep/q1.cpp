#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long money = 1, ans = 0;
        for (int i = 1; i < k; i++) {
            money *= 2;
            ans += money;
            money = 1;
        }
        for (int i = k; i <= n; i++) {
            money *= 2;
        }
        ans += money;
        cout << ans << endl;
    }
    return 0;
}
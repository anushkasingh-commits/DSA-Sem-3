#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ans = std::gcd(a[0], a[n - 1]);
        cout << ans << endl;
    }
    return 0;
}
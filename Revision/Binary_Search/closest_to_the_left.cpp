#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (k--) {
        int t;
        cin >> t;
        if (t < a[0]) {
            cout << 0 << endl;
            continue;
        }
        auto good = [&](int m) {
            if (a[m] <= t) return true;
            else return false;
        };
        int l = 0, r = n;
        while (r > l + 1) {
            int m = l + (r - l)/2;
            if (good(m)) l = m;
            else r = m; 
        }
        cout << l+1 << endl;
    }
    return 0;
}
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
        if (t > a[n-1]) {
            cout << n + 1 << endl;
            continue;
        }
        auto good = [&] (int m) -> bool {
            if (a[m] >= t) return true;
            else return false; 
        };
        int l = -1, r = n-1;
        while (r > l + 1) {
            int m = l + (r - l) / 2;
            if (good(m)) r = m;
            else l = m;
        }
        cout << r + 1 << endl;
    }
    return 0;
}
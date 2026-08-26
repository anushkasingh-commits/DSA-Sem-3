#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto good = [&] (double x) -> bool {
        long long pieces = 0;
        for (int i = 0; i < n; i++) {
            pieces += floor(a[i] / x);
        }
        return pieces >= k;
    };
    double l = 0, r = 1e8;  // l is good and r is bad
    while (r - l > 1e-7) {
        double m = l + (r - l) / 2;
        if (good(m)) l = m;
        else r = m;
    }
    cout << setprecision(10) << l << endl;

    return 0;
}
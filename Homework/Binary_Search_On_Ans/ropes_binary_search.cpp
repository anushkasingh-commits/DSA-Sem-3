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
        int pieces = 0;
        for (int i = 0; i < n; i++) {
            pieces += floor(a[i]/x);
        }
        return pieces >= k;
    };
    double l = 0;
    double r = *max_element(a.begin(), a.end());
    while (r - l > 1e-7) {
        double m = l + (r-l) / 2;
        if (good(m)) l = m;
            else r = m;
        }
    cout << l << endl;
}
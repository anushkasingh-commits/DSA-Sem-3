#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main () {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto good = [&](int time) -> bool {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += (time/a[i]);
        }
        if (total >= t) return true;
        return false;
    }; 
    int l = 0, r = 1;
    while (!good(r)) r *= 2; 
    while (r > l+1) {
        int m = l + (r-l)/2;
        if (good(m)) r = m;
        else l = m;
    }
    cout << r << endl;
}
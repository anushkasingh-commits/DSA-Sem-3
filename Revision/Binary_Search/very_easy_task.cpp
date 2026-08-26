#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, x, y;
    cin >> n >> x >> y;
    auto good = [&](long long m) -> bool {
        long long first = min(x, y);
        if (m < first) {
            return false;
        }
        m -= first;
        return (m/x) + (m/y) >= n-1;
    };
    long long l = 0, r = 1;
    while (!good(r)) {
        r *= 2;
    }
    while (r > l + 1) {
        long long m = l +(r-l)/2;
        if (good(m)) r = m;
        else l = m;
    }
    cout << r << endl;
    return 0;
}
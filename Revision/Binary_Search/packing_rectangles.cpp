#include <bits/stdc++.h>
using namespace std;
int main () {
    int w, h, n;
    cin >> w >> h >> n;
    auto good = [&] (long long x) -> bool {
        return (x / w) * (x / h) >= n;
    };
    int l = 0, r = 1;     // l is bad and r is good
    while (!good(r)) r *= 2;
    while (l + 1 < r) {
        int m = l + (r - l) / 2;
        if (good(m)) r = m;
        else l = m;
    }
    cout << r << endl;
    return 0;
}
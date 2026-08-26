#include <bits/stdc++.h>
using namespace std;
int main () {
    int w, h, n;
    cin >> w >> h >> n;
    auto good = [&](long long x) -> bool {
        return (x/w) * (x/h) >= n;
    };
    int l = 0, r = 1;
    while (!good(r)) r *= 2;
    while (r > l + 1) {
        int mid = l + (r - l)/2;
        if (good(mid)) r = mid;
        else l = mid;
    }
    cout << r << endl;
}
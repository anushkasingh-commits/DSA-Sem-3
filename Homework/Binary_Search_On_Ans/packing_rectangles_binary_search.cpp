#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main () {
    int w, h, n;
    cin >> w >> h >> n;
    auto good = [&](long long x) -> bool {
        return (x/w) * (x/h) >= n;
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
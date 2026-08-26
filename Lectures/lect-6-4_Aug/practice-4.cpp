#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int t;
    cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;
        int less_than_l = lower_bound(a.begin(), a.end(), l) - a.begin();
        int greater_than_r = a.end() - upper_bound(a.begin(), a.end(), r);
        cout << n - less_than_l - greater_than_r << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (k--) {
        int t;
        cin >> t;
        //exeption
        if (t > a[n-1]) {
            cout << "NO" << endl;
            continue;
        }
        // function to check a[mid] >= target
        auto Good = [&] (int m) -> bool {
            if (a[m] >= t) return true;
            return false;
        };
        int left = -1;
        int right = n-1;
        while (left + 1 < right) {
            int mid = left + (right - left)/2;
            if (Good(mid)) right = mid;
            else left = mid;
        }
        if (t == a[right]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
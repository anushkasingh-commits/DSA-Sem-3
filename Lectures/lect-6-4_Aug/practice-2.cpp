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
        if (t < a[0]) {
            cout << 0 << endl;
            continue;
        }
        // function to check a[mid] >= target
        auto Good = [&] (int m) -> bool {
            if (a[m] <= t) return true;
            return false;
        };
        int left = 0;
        int right = n;
        while (left + 1 < right) {
            int mid = left + (right - left)/2;
            if (Good(mid)) left = mid;
            else right = mid;
        }
        cout << left + 1 << endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int target;
//     cin >> target;
//     int left = 0, right = n-1;
//     while (left <= right) {
//         int mid = left + (right - left)/2;

//         if (a[mid] == target) {
//             cout << mid << endl;
//             break;
//         }
//         else if (a[mid] < target) {
//             left = mid + 1;
//         }
//         else right = mid - 1;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        bool found = false;
        int l = 0, r = n-1;
        while (l <= r) {
            int m = l + (r - l)/2;
            if (a[m] == x) {
                found = true;
                break;
            } else if (a[m] < x) l = m + 1;
            else r = m - 1;
        }
        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
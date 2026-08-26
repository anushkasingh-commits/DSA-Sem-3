#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int target = 0; 
    cin >> target;
    int ans = 0;
    
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (right - left) / 2;
        if (a[mid] == target) {
            ans = mid;
            break;
        } else if (a[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
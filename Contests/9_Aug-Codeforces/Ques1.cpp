#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[] = {a, b, c};
        sort(arr, arr+3);
        int ans = min(arr[2] - arr[0], arr[1]);
        cout << ans << endl;
    }
    return 0;
}
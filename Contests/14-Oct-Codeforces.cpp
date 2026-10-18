#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int ans = -1;
        for (int i = b; i >= 1; i--) {
            if (a-b >= i) {
                ans = i; 
                break;
            }
        }
        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd = 0;
        int even1 = 0;
        int even2 = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x % 2 !=0) odd++;
            else if (x % 4 == 0) even1++;
            else even2++;
        }
        cout << max({odd, even1, even2}) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (a[i] != i+1) {
                b.push_back(a[i]);
            }
        }
        bool flag = true;
        for (int i = 1; i < b.size(); i++) {
            if (b[i-1] < b[i]) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
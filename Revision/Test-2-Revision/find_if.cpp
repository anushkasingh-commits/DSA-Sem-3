#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto it = find_if(a.begin(), a.end(), [k](int x){
        return x > k;
    });
    if (it != a.end()) cout << *it;
    else cout << -1;
    return 0;
}
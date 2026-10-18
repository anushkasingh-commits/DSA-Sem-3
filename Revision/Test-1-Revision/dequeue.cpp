#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    deque<int> dq;
    vector<int> largest;
    for (int i = 0; i < n; i++) {
        if (!dq.empty() && dq.front() <= i-k) {
            dq.pop_front();
        }
        while (!dq.empty() && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k-1) {
            largest.push_back(a[dq.front()]);
        }
    }
    for (int i = 0; i < largest.size(); i++) {
        cout << largest[i] << " ";
    }
    return 0;
}
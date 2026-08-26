#include <bits/stdc++.h>
using namespace std;
int main () {
    auto cmp = [](int a, int b) { return a < b; };
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
    for (auto x : v) {
        pq.push(x);
    }
    for (int i = 0; i < k; i++) {
        int maxi = pq.top();
        pq.pop();
        pq.push(floor(sqrt(maxi)));
    }
    long long sum = 0;
    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    cout << sum << endl;
    return 0;
}
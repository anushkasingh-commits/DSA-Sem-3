#include <bits/stdc++.h>
using namespace std;
int main (){
    auto cmp = [] (pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first > b.first;
    };
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    int k;
    cin >> k;
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
    auto binary = [&] (const vector<int> &row) { 
        int lo = 0;
        int hi = row.size();
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (row[mid] == 1) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        return lo;
    };
    for (int i = 0; i < n; i++) {
        int soldiers = binary(mat[i]);
        pq.push({soldiers, i});
    }
    while (k--) {
        cout << pq.top().second << " ";
        pq.pop();
    }
    return 0;
}
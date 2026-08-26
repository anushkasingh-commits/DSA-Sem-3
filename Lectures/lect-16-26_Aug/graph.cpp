#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
int main () {
    vector<int> g[N];
    int n, m;
    cin >> n >> m; // count of vertex and edges
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    // print graph
    for (int i = 0; i < 6; i++) {
        for (auto x : g[i]) cout << x << " ";
        cout << endl;
    }

    // perform BFS -> Breadth first searcch
    queue<int> q;
    q.push(1);
    while (q.size()) {
        int temp = q.front();
        q.pop();
        // your code
        cout << temp << " ";
        for (auto x : g[temp]) {
            q.push(x);
        }
    } 
    cout << endl;

    // perform DFS
    stack<int> s;
    s.push(1);
    while (s.size()) {
        int temp = s.top();
        s.pop();
        // your code
        cout << temp << " ";
        for (auto x : g[temp]) {
            s.push(x);
        }
    } 
    return 0;
}
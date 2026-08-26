#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    cout << "Count: " << s.count(1) << endl;
    s.erase(1);
    cout << "Size: " << s.size() << endl;
    for (auto x : s) {
        cout << x << " ";
    }
    return 0;
}
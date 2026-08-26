#include <bits/stdc++.h>
using namespace std;
int main () {
    {
        unordered_set<int> a;
        cout << "Size of a : " << a.size() << endl;
        a.insert(1);
        a.insert(2);
        a.insert(0);
        a.insert(3);
        // traverse
        for (auto x : a) {
            cout << x << " ";
        }
        cout << endl;
        cout << "Count of 1 : " << a.count(1) << endl;
    }
}
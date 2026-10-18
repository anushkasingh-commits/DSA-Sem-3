#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.erase(remove_if(a.begin(), a.end(), [](int x){
        return x % 2 != 0;
    }),
    a.end()
    );
    for (auto x : a) {
        cout << x << " ";
    } 
    return 0;
}
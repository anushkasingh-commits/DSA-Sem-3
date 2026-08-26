#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto lb = lower_bound(a.begin(), a.end(), target);
    auto ub = upper_bound(a.begin(), a.end(), target);
    // lower_bound
    cout << *lower_bound(a.begin(), a.end(), target) << endl;

    // upper_bound
    cout << *upper_bound(a.begin(), a.end(), target) << endl;

    // indexes
    // lower_bound
    cout << lower_bound(a.begin(), a.end(), target) - a.begin() << endl;

    // upper_bound
    cout << upper_bound(a.begin(), a.end(), target) - a.begin() << endl;
   
    // Elements < target
    cout << lb - a.end() << endl;

    // Elements > target
    cout << a.end() - ub << endl;
    
    // Elements >= target
    cout << a.end() - lb << endl;
    
    // Elements <= target
    cout << ub - a.begin() << endl; 

    // Count occurences
    cout << ub - lb << endl;
}

// just bigger than target : UB
// just equal and bigger : LB
// Elements < target : LB - begin()
// Elements > target : end() - UB
// Elements >= target : end() - LB
// Elements <= target : UB - begin()
// Count occurences : UB - LB
// Check if exists : *LB == target
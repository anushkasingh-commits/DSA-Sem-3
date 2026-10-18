// Hashing -> A powerful technique jo ki time complexity ko reduce krti hai by using some 
// Ex. -> Count the number in an array of numbers

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Brute force
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k; 
    cin >> k;
    // int cnt = 0;
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == 1) cnt++;
    // }
    // cout << cnt << endl;

    // Make a Hash Table using Static Array
    int table[5];
    for (int i = 0; i < 5; i++) {
        table[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        table[a[i]]++;
    }
    for (int i = 0; i < 5; i++) {
        cout << "Count of " << i << " : " << table[i] << endl;
    }
    // HAsh Table provides O(1) complexity
    return 0;
}
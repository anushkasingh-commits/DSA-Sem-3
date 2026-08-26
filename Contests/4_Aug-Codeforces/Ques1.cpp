#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;
        int rounds = 0;
        if (a == b || b == c || c == a) {
            cout << 0 << endl;
            continue;
        }
        while ((a != b) && (b != c) && (a != c)) {
            if (a > b && a > c) {
                if (b < a && b < c) {
                    a--;
                    b++;
                    rounds++;
                } else {
                    a--;
                    c++;
                    rounds++;
                }
            } else if (b > a && b > c) {
                if (a < b && a < c) {
                    a++;
                    b--;
                    rounds++;
                } else {
                    c++;
                    b--;
                    rounds++;
                }
            } else {
                if (b < a && b < c) {
                    b++;
                    c--;
                    rounds++;
                } else {
                    a++;
                    c--;
                    rounds++;
                }
            }
        }
        cout << rounds << endl;
    }
    return 0;
}
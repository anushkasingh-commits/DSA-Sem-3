// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         stack<char> st;
//         int cnt = 0;
//         for (int i = 0; i < n; i++) {
//             if (s[i] == '(') st.push('(');
//             else if (s[i] == ')') {
//                 if (!st.empty()) st.pop();
//                 else cnt++;
//             }
//         }
//         while (!st.empty()) {
//             cnt++;
//             st.pop();
//         }
//         cout << cnt/2 << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int zero = count(s.begin(), s.end(), '0');
//         int one = count(s.begin(), s.end(), '1');
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == '0') {
//                 if (one > 0) one--;
//                 else break;
//             } else {
//                 if (zero > 0) zero--;
//                 else break;
//             }
//         }
//         cout << zero + one << endl;
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int ans = INT_MAX;
//         int even = 0;
//         for (int i = 0; i < n; i++) {
//             int rem = a[i] % k;
//             int op = (k - rem) % k;
//             ans = min(ans, op);
//             if (a[i] % 2 == 0) even++;
//         }
//         if (k == 4) {
//             if (even >= 2) ans = 0;
//             else if (even == 1) ans = min(ans, 1);
//             else ans = min(ans, 2);
//         }
//         cout << ans << endl;
//     }
// }

// ----------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int n, t;
//     cin >> n >> t;
//     if (t == 10) {
//         if (n == 1) cout << -1;
//         else {
//             cout << 1;
//             for (int i = 0; i < n-1; i++) {
//                 cout << 0;
//             }
//         }
//     }
//     else {
//         for (int i = 0; i < n; i++) {
//             cout << t;
//         }
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int a, b;
//     cin >> a >> b;
//     int candles = a;
//     int stubs = a;
//     while (stubs >= b) {
//         int newCandles = stubs / b;
//         candles += newCandles;
//         stubs = (stubs % b) + newCandles; 
//     }
//     cout << candles << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------


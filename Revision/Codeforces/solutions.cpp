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

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int n, m;
//     cin >> n >> m;
//     int days = n;
//     while(n >= m) {
//         n = n-m+1;
//        days++;
//     }
//     cout << days << endl;
// }

// ----------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(m);
//     for (int i = 0; i < m; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     int ans = INT_MAX;
//     for (int i = 0; i + n <= m; i++) {
//         ans = min(ans, a[i+n-1]-a[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
//1475A

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         while (n % 2 == 0) {
//             n /= 2;
//         }
//         if (n > 1) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
// }

// ----------------------------------------------------------------------------
// 451A

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     long long n, m;
//     cin >> n >> m;
//     if ((n * m) % 2 == 0) cout << "Malvika" << endl;
//     else cout << "Akshat" << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1374B

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         int a = 0, b = 0;

//         while (n % 2 == 0) {
//             n /= 2;
//             a++;
//         }
//         while (n % 3 == 0) {
//             n /= 3;
//             b++;
//         }
//         if (n != 1 || a > b) cout << -1 << endl;
//         else cout << 2 * b - a << endl;
//     }
// }

// ----------------------------------------------------------------------------
// 34B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     int profit = 0;
//     for (int i = 0; i < m && a[i] < 0; i++) {
//         profit += abs(a[i]);
//     }
//     cout << profit << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1850D

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     int curr_grp = 1;
//     int larger_grp = 1;
//     for (int i = 1; i < n; i++) {
//         if(a[i] - a[i-1] <= k) curr_grp++;
//         else curr_grp = 1;
//         larger_grp = max(curr_grp, larger_grp);
//     }
//     cout << n-larger_grp << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1878C

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, k, x;
//         cin >> n >> k >> x;
//         long long minSum = k * (k + 1) / 2;
//         long long maxSum = k * (2 * n - k + 1) / 2;
//         if (x >= minSum && x <= maxSum)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         long long sum = 0;
//         for (int i = 1; i <= n; i++) {
//             int x = i;
//             while (x > 0) {
//                 sum += x % 10;
//                 x /= 10;
//             }
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n-1);
//         for (int i = 0; i < n-1; i++) {
//             cin >> a[i];
//         }
//         string s;
//         cin >> s;
//         int walls = 0;
//         for (int i = 0; i < s.size()-1; i++) {
//             if (s[i+1] == 'S') walls++;
//         }
//         cout << walls <<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         long long sum = 0;
//         for (int i = 1; i <= n; i++) {
//             long long x = i;
//             while (x > 0) {
//                 sum += x % 10;
//                 x /= 10;
//             }
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<string> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         bool tri = false;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n-2; j++) {
//                 if (a[i][j] == '0' && a[i][j+1] =='1' && a[i][j+1] == '0') {
//                     cout << "TRIANGLE" << endl;
//                     tri=true;
//                     break;
//                 }
//             }
//         }
//         if(!tri) cout << "SQUARE" << endl;
//     }
// }

// ----------------------------------------------------------------------------
// 1883B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         unordered_map<char, int> freq;
//         for (auto i : s) {
//             freq[i]++;
//         } 
//         int odd = 0;
//         for (auto i : freq) {
//             if (i.second % 2 != 0) odd++;
//         }
//         if (odd - 1 <= k) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1870D

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, q;
//         cin >> n >> q;
//         vector<long long> prefix(n + 1, 0);
//         for (int i = 1; i <= n; i++) {
//             long long x;
//             cin >> x;
//             prefix[i] = prefix[i - 1] + x;
//         }
//         long long total = prefix[n];
//         while (q--) {
//             int l, r;
//             long long k;
//             cin >> l >> r >> k;
//             long long rangeSum = prefix[r] - prefix[l - 1];
//             long long newSum = total - rangeSum + (r - l + 1) * k;
//             if (newSum % 2 != 0) cout << "YES\n";
//             else cout << "NO\n";
//         }
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1475B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         bool ok = false;
//         while (n >= 0) {
//             if (n % 2021 == 0) {
//                 ok = true;
//                 break;
//             }
//             n -= 2020;
//         }
//         if (ok) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 474A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     char c;
//     cin >> c;
//     string s;
//     cin >> s;
//     string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
//     string ans = "";
//     for (int i = 0; i < s.size(); i++) {
//         int pos = keyboard.find(s[i]);
//         if (c == 'R') ans.push_back(keyboard[pos-1]);
//         else ans.push_back(keyboard[pos+1]);
//     }
//     cout << ans << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1373B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int zero = 0;
//         int one = 0;
//         for (char ch : s) {
//             if (ch == '0') zero++;
//             else one++;
//         }
//         int moves = min(zero, one);
//         if (moves % 2 == 1) cout << "DA" << endl;
//         else cout << "NET" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1343A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         long long ans = 3;
//         while (true) {
//             if (n % ans == 0) {
//                 cout << n / ans << endl;
//                 break;
//             }
//             ans = ans * 2 + 1;
//         }
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1875A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b, n;
//         cin >> a >> b >> n;
//         long long ans = b;
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             ans += min(x, a-1);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1855B

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         long long l = 1;
//         while (n % l == 0) {
//             l++;
//         }
//         cout << l - 1 << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1837B

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
//         int ans = 1, cnt = 1;
//         for (int i = 1; i < n; i++) {
//             if (s[i] == s[i-1]) cnt++;
//             else cnt = 1;
//.            ans = max(ans, cnt);
//         }
//         cout << ans + 1 << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1559A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int ans;
//         cin >> ans;
//         for (int i = 1; i < n; i++) {
//             int x;
//             cin >> x;
//             ans = ans & x;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 556A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int zero = 0, one = 0;
//     for (int i = 0; i < n; i++) {
//         if (s[i] == '0') zero++;
//         else one++;
//     }
//     cout << abs(zero-one) << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1675B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int ans = 0;
//         bool ok = true;
//         for (int i = n-2; i >= 0; i--) {
//             while (a[i] >= a[i+1] && a[i] > 0) {
//                 a[i] /= 2;
//                 ans++;
//             }
//             if (a[i] >= a[i+1]) {
//                 ok = false;
//                 break;
//             }
//         }
//         cout << (ok ? ans : -1) << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 149A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int k;
//     cin >> k;
//     vector<int> a(12);
//     for (int i = 0; i < 12; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end(), greater<int>());
//     int ans = 0;
//     int cnt = 0;
//     for (int i = 0; i < 12; i++) {
//         if (ans < k) {
//             ans += a[i];
//             cnt++;
//         }
//     }
//     if (ans >= k) cout << cnt << endl;
//     else cout << -1 << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 115A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> manager(n+1);
//     for (int i = 1; i <= n; i++) {
//         cin >> manager[i];
//     }
//     int ans = 0;
//     for (int i = 1; i <= n; i++) {
//         int current = i, cnt = 0;
//         while (current != -1) cnt++, current = manager[current];
//         ans = max(ans, cnt);
//     }
//     cout << ans << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 320A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n;
//     cin >> n;
//     long long temp = n;
//     while (temp >= 10) {
//         temp /= 10;
//     }
//     if (temp != 1) {
//         cout << "NO" << endl;
//         return 0;
//     }
//     while (n > 0) {
//         int digit = n % 10;
//         if (digit != 1 && digit != 4) cout << "NO" << endl;
//         n /= 10;
//     }
//     cout << "YES" << endl;
// }

// ----------------------------------------------------------------------------
// 39D

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b, c, x, y, z;
//     cin >> a >> b >> c >> x >> y >> z;
//     if (a == x || b == y || z == c) cout << "YES" << endl;
//     else cout << "NO" << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1794B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++) {
//             if (a[i] == 1) a[i]++;
//         }
//         for (int i = 0; i < n-1; i++) {
//             if (a[i+1] % a[i] == 0) {
//                 a[i+1]++;
//             }
//         }
//         for (auto i : a) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1679A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         if (n % 2 != 0 || n < 4) {
//             cout << -1 << endl;
//             continue;
//         }
//         long long mini = (n + 5) / 6;
//         long long maxi = n / 4;
//         cout << mini << " " << maxi << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1543A

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--) {
//         ll a, b;
//         cin >> a >> b;
//         if (a==b) {
//             cout << "0 0" << endl;
//             continue;
//         }
//         ll d = abs(a-b);
//         ll r = a % d;
//         ll moves = min(r , d - r);
//         cout << d << " " << moves << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1593B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--) {
//         string s;
//         cin >> s;
//         int ans = s.size();
//         string a[] = {"00", "25", "50", "75"};
//         for (string x : a) {
//             int cnt = 0;
//             int j = 1;
//             for (int i = s.size()-1; i >= 0; i--) {
//                 if (s[i] == x[j]) {
//                     j--;
//                     if (j < 0) break;
//                 } else cnt++;
//             }
//             if (j < 0) ans = min(ans, cnt);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1380A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         bool found = false;
//         for (int i = 1; i < n-1; i++) {
//             if (a[i-1] < a[i] && a[i] > a[i+1]) {
//                 cout << "YES" << endl; 
//                 cout << i << " " << i+1 << " " << i+2; 
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) cout << "NO" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1828B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int ans = 0;
//         for (int i = 0; i < n; i++) {
//             int diff = abs((i+1)-a[i]);
//             ans = gcd(ans, diff);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1335B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, a, b;
//         cin >> n >> a >> b;
//         for (int i = 0; i < n; i++) {
//             cout << char('a' + i % b);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1971C

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         string ans = "";
//         for (int i = 1; i <= 12; i++) {
//             if (i == a || i == b) ans += 'a';
//             if (i == c || i == d) ans += 'b';
//         }
//         if (ans == "abab" || ans == "baba") cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1606A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         s[s.size()-1] = s[0];
//         cout << s << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1985D

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<string> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int top = -1, bottom = -1, center = 0, col = -1;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (a[i][j] == '#') {
//                     if (top == -1) {
//                         top = i;
//                         col = j;
//                     }
//                     bottom = i;
//                 }
//             }
//         }
//         center = (top + bottom) / 2;
//         cout << center + 1 << " " << col + 1 << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1941C

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
//         string map = "map", pie = "pie";
//         int ans = 0;
//         for (int i = 0; i < n-2; i++) {
//             if (s.substr(i, 3) == map || s.substr(i, 3) == pie) {
//                 ans++;
//                 i += 2;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1742C

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         vector<string> s(8);
//         for (int i = 0; i < 8; i++) {
//             cin >> s[i];
//         }
//         bool found = false;
//         for (int i = 0; i < 8; i++) {
//             int count = 0;
//             for (int j = 0; j < 8; j++) {
//                 if (s[i][j] == 'R') {
//                     count++;
//                 }
//             }
//             if (count == 8) {
//                 found = true;
//             }
//         }
//         if (found) cout << "R" << endl;
//         else cout << "B" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1696B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int groups = 0;
//         if (a[0] != 0) groups++;
//         for (int i = 1; i < n; i++) {
//             if (a[i] != 0 && a[i-1] == 0) {
//                 groups++;
//             } 
//         }
//         cout << min(groups, 2) << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2260B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long x, y, k;
//         cin >> x >> y >> k;
//         long long difference = y - x;
//         long long ans = 0;
//         long long months = min(k , max(0LL, difference - x + 1));
//         for (long long i = 0; i < months; i++) {
//             ans += difference % (x + i);
//         }
//         ans += (k - months) * difference;
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1927B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         vector<int> fq(26, 0);
//         string ans = "";
//         int next = 0;
//         for (int i = 0; i < n; i++) {
//             if (a[i] == 0) {
//                 while (fq[next] != 0) {
//                     next++;
//                 }
//                 ans += char('a' + next);
//                 fq[next]++;
//                 next++;
//             } else {
//                 for (int j = 0; j < 26; j++) {
//                     if (fq[j] == a[i]) {
//                         ans += char('a' + j);
//                         fq[j]++;
//                         break;
//                     }
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2258B1

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<int> fq(m+1, 0);
//         for (int i = 0; i < n; i++) {
//             int x; 
//             cin >> x;
//             fq[x]++;
//         }
//         for (int i = m-1; i >= 1; i--) {
//             fq[i] += fq[i+1];
//         }
//         int ans = 0;
//         for (int x = 1; x <= m; x++) {
//             int curr = fq[x];
//             if (2 * x <= m) {
//                 curr += fq[2 * x];
//                 if (2 * x < m) {
//                     curr -= fq[2 * x + 1];
//                 }
//             }
//             ans = max(ans, curr);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2254B

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
//         int pos = -1;
//         for (int i = 1; i < n - 1; i++) {
//             if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
//                 pos = i;
//                 break;
//             }
//         }
//         if (pos == -1) {
//             for (int i = 1; i < n - 1; i++) {
//                 if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
//                     pos = i;
//                     break;
//                 }
//             }
//         }
//         if (pos == -1) {
//             pos = 1;
//         }
//         s.erase(pos, 1);
//         int ans = 0;
//         for (int i = 0; i < s.size(); i++) {
//             if (i == 0 || s[i] != s[i - 1]) {
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 275A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a[3][3];
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             int cnt = a[i][j];
//             if (i > 0) cnt += a[i - 1][j];
//             if (i < 2) cnt += a[i + 1][j];
//             if (j > 0) cnt += a[i][j - 1];
//             if (j < 2) cnt += a[i][j + 1];
//             if (cnt % 2 == 0) cout << 1;
//             else cout << 0;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2225B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int cnt = 0;
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == s[i+1]) {
//                 cnt++;
//             }
//         }
//         if (cnt <= 2) {
//             cout << "YES" << endl;
//         }
//         else cout << "NO" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1337B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x, n, m;
//         cin >> x >> n >> m;
//         while (x > 20 && n > 0) {
//             x = x / 2 + 10;
//             n--;
//         }
//         x -= 10 * m;
//         if (x <= 0) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1665B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         map<int, int> mp;
//         for (auto i : a) {
//             mp[i]++;
//         }
//         int maxFreq = 0;
//         for (auto &p : mp) {
//             if (p.second > maxFreq) {
//                 maxFreq = p.second;
//             }
//         } 
//         int cnt = 0;
//         while (maxFreq < n) {
//             cnt++;
//             maxFreq = min(n, maxFreq * 2);
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 709A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, b, d;
//     cin >> n >> b >> d;
//     int sum = 0;
//     int ans = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         if (x <= b) {
//             sum += x;
//             if (sum > d) {
//                 ans++;
//                 sum = 0;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2247B

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, k, m;
//         cin >> n >> k >> m;
//         if (k > m) {
//             cout << "NO" << endl;
//             continue;
//         }
//         cout << "YES" << endl;
//         for (int i = 1; i <= n; i++) {
//             if (i < k) {
//                 cout << 1 << " ";
//             }
//             else if (i == k) {
//                 cout << m - k + 1 << " ";
//             }
//             else {
//                 cout << 1 << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2226B

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int ans = 0;
//         for (int i = 0; i < n - 1; i++) {
//             int diff = abs(a[i] - a[i + 1]);
//             if (a[i] % diff == 0) {
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 1462C

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x;
//         cin >> x;
//         if (x > 45) {
//             cout << -1 << endl;
//             continue;
//         } 
//         string ans = "";
//         for (int i = 9; i >= 1; i--) {
//             if (x >= i) {
//                 ans += char('0' + i);
//                 x -= i;
//             }
//         }
//         reverse(ans.begin(), ans.end());
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 916A

// #include <bits/stdc++.h>
// using namespace std;
// bool lucky(int h, int m) {
//     while (h > 0) {
//         if (h % 10 == 7) return true;
//         h /= 10;
//     }
//     while (m > 0) {
//         if (m % 10 == 7) return true;
//         m /= 10;
//     }
//     return false;
// }
// int main() {
//     int x, h, m;
//     cin >> x >> h >> m;
//     int steps = 0;
//     while (!lucky(h, m)) {
//         m -= x;
//         if (m < 0) {
//             m += 60;
//             h--;
//             if (h < 0) h = 23;
//         }
//         steps++;
//     }
//     cout << steps << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2263B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         if (k > n || k > 2*n-1) cout << -1 << endl; continue;
//         vector<vector<int>>r(n, vector<int> (n, 0));
//         int num = 1, x = 2*n-k;
//         for (int i = 0; i < x; i++) {
//             r[i][i] = num++;
//         }
//         for (int i = x; i < n; i++) {
//             r[x-1][i] = num++;
//         }
//         for (int i = x; i < n; i++) {
//             r[i][n-1] = num++;
//         }
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (r[i][j] == 0) {
//                     r[i][j] = num++;
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cout << r[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2246B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         if (n == 1) cout << 1 << endl;
//         else if (n == 2) cout << -1 << endl;
//         else {
//             cout << 1 << " " << 2 << " " << 3;
//             long long x = 6;
//             for (int i = 4; i <= n; i++) {
//                 cout << " " << x;
//                 x *= 2;
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2238B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         long long ans = 0;
//         for (int i = 1; i <= n; i++) {
//             long long cnt = n / i;
//             ans += cnt * cnt;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2233B

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         for (int i = 1; i <= n; i++) {
//             int next = (i%n) + 1;
//             cout << i << " " << next << " " << next << " " << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2259C

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++) {
//             if (a[i] == -1) {
//                 a[i] = 1;
//             } 
//             if (a[i] == 1) {
//                 break;
//             }
//         }
//         for (int j = n-1; j >= 0; j--) {
//             if (a[j] == -1) {
//                 a[j] = 1;
//             } 
//             if (a[j] == 1) {
//                 break;
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             if (a[i] == -1) {
//                 a[i] = 0;
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2256B

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
//         int ans = 0;
//         for (int i = 0; i <= 1; i++) {
//             for (int j = 0; j <= 1; j++) {
//                 string temp = s;
//                 temp[0] = '0' + i;
//                 temp[1] = '0' + j;
//                 for (int k = 2; k < n; k++) {
//                     temp[k] = (temp[k-2] == '0' ? '1' : '0');
//                 }
//                 bool ok = true;
//                 for (int k = 0; k < n; k++) {
//                     if (s[k] != '?' && s[k] != temp[k]) {
//                         ok = false;
//                         break;
//                     }
//                 }
//                 if(ok) ans++;
//             } 
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------
// 2248B



// ----------------------------------------------------------------------------
// 
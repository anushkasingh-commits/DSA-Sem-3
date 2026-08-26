// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     auto triangle = [](int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     };
//     triangle(4);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     auto invert = [] (int n) {
//         for (int i = n; i >= 1; i--) {
//             for (int j = i; j >= 1; j--) {
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     };
//     invert(4);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     function<int(int)> fib = [&](int n) -> int {
//         if (n <= 1) return n;
//         return fib(n-1) + fib(n-2);
//     };
//     cout << fib(3) << endl;
// }
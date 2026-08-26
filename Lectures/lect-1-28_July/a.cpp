// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     // auto add = [](int a, int b) {return a + b; };
//     // cout << add(3, 4);

//     auto sub = [](int a, int b) {return a - b; };
//     cout << sub(7, 4);
// }

// #include <bits/stdc++.h>
// using namespace std; 
// // int add (int a, int b) {
// //     return a + b;
// // }
// int main () {
//     int a = 2, b = 9;
//     auto add = [&]() -> int { 
//         a = 7;
//         // cout << a << endl;
//         return a + b; 
//     };
    
//     cout << add() << endl;
//     cout << a << endl;
// }

#include <bits/stdc++.h>
using namespace std; 
int main () {
    function<int(int)> fib = [&](int n) -> int {
        if (n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
    };
    cout << fib(3) << endl;
}
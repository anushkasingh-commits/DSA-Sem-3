#include <bits/stdc++.h>
using namespace std;
int main () {
    // [=] captures all the loval variables by values.
    {
        int n = 9;
        int a = 1;
        auto g = [=] (int x) { return x + n + a; };
        cout << g(5) << endl;
    }
    // [n] or [a] captures specific variable.
    {
        int n = 5;
        int a = 5;
        // auto g = [a] (int x) { return x + a + n; }; // gives error because n is not captured.
    }

    {
        int n = 8;
        auto g = [n](int x) { return x * n; };
        n = 100;  // [=] freezes the value of n.
        cout << g(3) << endl;
    }
    // [&] uses the real variables so changes are seen outside.
    {
        int cnt = 0;
        auto g = [&] () { cnt++; };
        g();
        g();
        cout << cnt << endl;
    }
    // [x] copies x and [&x] takes the real x. Mixing is allowed.
    {
        int a = 1;
        int b = 3;
        auto g = [a, &b] () { b += a; };
        g(); g();
        cout << b << endl;
    }
    return 0;
}
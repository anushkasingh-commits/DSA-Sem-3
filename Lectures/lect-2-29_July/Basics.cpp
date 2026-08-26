#include <bits/stdc++.h>
using namespace std;
int main () {
    auto add = [](int a, int b) {
        return a + b;
    };
    cout << add(2, 3) << endl;
    
    auto sq = [](int x) {return x * x; }; // [] & {} are compulsory

    auto b = [] {return "Hi" ;} ; // () is not compulsory
    cout << sq(2) << endl;
    cout << b() << endl;

    auto sum = [] (vector<int> &a) {
        long long s = 0;
        for (int x : a) s += x; 
        return s;
    };
    vector<int> a = {1, 2, 3, 4, 5};
    cout << sum(a) << "\n";

    auto half = [](int x) {return x / 2 ;};
    auto square = [] (int n) -> long long { return 1LL * n * n; }; // Return type is deduced. Write '-> Data type' to force it.
    cout << half(9) << endl;
    cout << square(200) << endl;

    return 0;
}
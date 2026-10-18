#include <bits/stdc++.h>
using namespace std;

int main() {
    string c;
    cin >> c;
    int q;
    cin >> q;
    stack<string> b, f;
    while(q--) {
        string o;
        cin >> o;
        if (o == "visit") {
            string url;
            cin >> url;
            b.push(c);
            c = url;
            while(!f.empty()) f.pop();
        }
        else if (o == "back") {
            int steps;
            cin >> steps;
            while (steps-- && !b.empty()) {
                f.push(c);
                c = b.top();
                b.pop();
            }
        }
        else if (o == "forward") {
            int steps;
            cin >> steps;
            while(steps-- && !f.empty()) {
                b.push(c);
                c = f.top();
                f.pop();
            }
        }
        cout << c << endl;
    }
    return 0;
}
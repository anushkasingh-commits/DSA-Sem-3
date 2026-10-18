#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    unordered_map<string, int> freq;
    string word;
    for (auto c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                freq[word]++;
                word.clear();
            }
        } else word += c;
    }
    if (!word.empty()) freq[word]++;
    for (auto x : freq) cout << x.first << " " << x.second << endl;
    return 0;
}
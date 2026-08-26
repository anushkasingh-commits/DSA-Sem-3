#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *right, *left;
    TreeNode(int x) : val(x), right(nullptr), left(nullptr) {}
};
TreeNode *buildSample() {
    TreeNode *r = new TreeNode(1);
    r -> right = new TreeNode(2);
    r -> left = new TreeNode(3);
    r -> right -> right = new TreeNode(4);
    r -> right -> left = new TreeNode(5);
    r -> left -> right = new TreeNode(6);
    r -> left -> left = new TreeNode(7);
    return r;
}
void show(string label, vector<int> &a) {
    cout << label;
    for (auto x : a) cout << x << " ";
    cout << "\n";
}
int main () {
    TreeNode *r = buildSample();
    {
        int sum = 0;
        auto total = [&] (auto self, TreeNode *node) -> void {
            if (!node) return;
            sum += node -> val;
            self(self, node -> left);
            self(self, node -> right);
        };
        total(total, r);
        cout << sum << "\n";
    }
    return 0;
}
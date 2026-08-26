#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), right(nullptr), left(nullptr) {};
};
bool check(TreeNode *l, TreeNode * r) {
    if (l == nullptr && r == nullptr) return true;
    if (l == nullptr || r == nullptr) return false;
    if (l -> val != r -> val) return false;
    return check(l -> left, r -> right) && check(l -> right, r -> left);
}
bool isSymmetric(TreeNode *root) {
    if (root == nullptr) return true;
    return check(root -> left, root -> right);
} 
int main () {
    TreeNode *root = new TreeNode(1);
    root -> right = new TreeNode(2);
    root -> left = new TreeNode(2);
    root -> right -> right = new TreeNode(3);
    root -> right -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(4);
    root -> left -> left = new TreeNode(3);
    cout << isSymmetric(root) << "\n";
}
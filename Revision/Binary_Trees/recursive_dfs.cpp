#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};
TreeNode *buildSample () {
    TreeNode *root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);
    return root;
}
void preorder(TreeNode *node, vector<int> &out) {
    if (!node) return;
    out.push_back(node->val);
    preorder(node->left, out);
    preorder(node->right, out);
}
void inorder(TreeNode *node, vector<int> &out) {
    if (!node) return;
    inorder(node->left, out);
    out.push_back(node->val);
    inorder(node->right, out);
}
void postorder(TreeNode *node, vector<int> &out) {
    if (!node) return;
    postorder(node->left, out);
    postorder(node->right, out);
    out.push_back(node->val);
}
void show(string label, vector<int> &v) {
    cout << label;
    for (int x : v) cout << x << " ";
    cout << "\n";
}
int main () {
    TreeNode *root = buildSample();
    vector<int> pre, in, post;
    preorder(root, pre);
    inorder(root, in);
    postorder(root, post);
    show("pre ", pre);
    show("in ", in);
    show("post ", post);

    {
        auto dfs = [&](auto &self, TreeNode *node) -> void {
            if (!node) return;
            cout << node->val << " ";
            self(self, node->left);
            self(self, node->right);
        };
        dfs(dfs, root);
        cout << "\n";
    }
    {
        int sum = 0;
        auto total = [&](auto &self, TreeNode *node) -> void {
            if (!node) return;
            sum += node->val;
            self(self, node->left);
            self(self, node->right);
        };
        total(total, root);
        cout << "\n";
    }
    {
        TreeNode *b = new TreeNode(5);
        b->left = new TreeNode(3);
        b->right = new TreeNode(8);
        b->left->left = new TreeNode(2);
        b->left->right = new TreeNode(4);
        b->right->left = new TreeNode(7);
        vector<int> v;
        inorder(b, v);
        show("bst  ", v);
    }

    return 0;
}
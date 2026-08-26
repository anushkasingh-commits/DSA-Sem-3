#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), right(nullptr), left(nullptr){};
};
int main () {
    TreeNode *root = new TreeNode(3);
    root -> right = new TreeNode(9);
    root -> left = new TreeNode(20);
    root -> left -> right = new TreeNode(15);
    root -> left -> left = new TreeNode(7);

    queue<TreeNode*> q;
    q.push(root);
    vector<int> level;
    int depth = 0;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode *node = q.front();
            q.pop();
            level.push_back(node -> val);
            if (node -> left) q.push(node -> left);
            if (node -> right) q.push(node -> right);
        }
        depth++;
    }
    cout << depth << endl;
}
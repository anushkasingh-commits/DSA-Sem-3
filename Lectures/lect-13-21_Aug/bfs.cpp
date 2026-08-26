#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){};
    TreeNode (int x) : val(x), left(nullptr), right(nullptr){};
};
void levelOrder(TreeNode *root, vector<int> &ans) {
    if (root == nullptr) return;
    queue<TreeNode*> q;
    q.push(root);

    while (q.size() > 0) {
        TreeNode *temp = q.front();
        q.pop();

        ans.push_back(temp -> val);
        
        if (temp -> left) q.push(temp -> left);
        if (temp -> right) q.push(temp -> right);
    }
}
int main () {
    int n;
    cin >> n;

    TreeNode *root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> right = new TreeNode(6);

    vector<int> ans; 
    levelOrder(root, ans);
    for (auto x : ans) cout << x << " ";

    return 0;
}
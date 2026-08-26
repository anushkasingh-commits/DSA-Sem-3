#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *right, *left;
    TreeNode(int v) : val(v) , right(nullptr), left(nullptr) {};
};
bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p == nullptr && q == nullptr) return true;
    if (p == nullptr || q == nullptr) return false;
    if (p->val != q->val) return false;
    return isSameTree(p -> left, q -> left) &&
           isSameTree(p -> right, q -> right);
}
int main () {
    TreeNode *p = new TreeNode(1);
    p -> right = new TreeNode(2);
    p -> left = new TreeNode(3);
    p -> right -> right = new TreeNode(4);
    p -> right -> left = new TreeNode(5);
    p -> left -> right = new TreeNode(6);
    p -> left -> left = new TreeNode(7);

    TreeNode *q = new TreeNode(1);
    q -> right = new TreeNode(2);
    q -> left = new TreeNode(3);
    q -> right -> right = new TreeNode(4);
    q -> right -> left = new TreeNode(5);
    q -> left -> right = new TreeNode(6);
    q -> left -> left = new TreeNode(7);    

    cout << isSameTree(p, q) << "\n";
    return 0;
}
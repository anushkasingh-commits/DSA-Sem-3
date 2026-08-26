#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), right(nullptr), left(nullptr);
};
int main () {

    vector<int> a[] = {-10, -3, 0, 5, 9};
    int m = left + (right - left) / 2;

    TreeNode *r = new TreeNode(a[m]);

    queue<TreeNode*> q;
    queue<int> lq, rq;
    q.push(r);
    lq.push(left);
    rq.push(right);
    while(!q.empty()) {
        TreeNode *node = q.front();
        q.pop();
        
    }
}
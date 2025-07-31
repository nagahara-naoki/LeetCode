struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};

        vector<int> left = inorderTraversal(root->left);  // 左部分木
        vector<int> right = inorderTraversal(root->right); // 右部分木

        left.push_back(root->val);
        left.insert(left.end(), right.begin(), right.end());

        return left;
    }
};

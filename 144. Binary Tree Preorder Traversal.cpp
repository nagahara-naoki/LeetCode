
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//  「2分木の根が与えられたとき、そのノードの値を前順（preorder）で走査した結果を返してください。」
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        r(root, result);

        return result;
    }
    void r(TreeNode *node, vector<int> &result)
    {
        if (node == nullptr)
            return;
        result.push_back(node->val);

        r(node->left, result);
        r(node->right, result);
    }
};

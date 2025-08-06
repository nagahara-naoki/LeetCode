// 二分探索木（BST）の根ノード root と整数 val が与えられます。
// BST の中から、ノードの値が val と等しいノードを探してください。
// そのノードを根とする部分木（そのノード以下すべての子孫ノードを含む木）を返します。
// もし、そのようなノードが存在しなければ、null を返してください。

#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == nullptr)
            return nullptr; // 探索終了：見つからなかった
        if (root->val == val)
            return root; // 見つけた → この部分木を返す

        if (val < root->val)
        {
            return searchBST(root->left, val); // 左の部分木を探索
        }
        else
        {
            return searchBST(root->right, val); // 右の部分木を探索
        }
    }
};

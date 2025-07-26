struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// 二分木の根ノードが与えられたとき、
// その木が自分自身の鏡像になっているか（つまり、中心を軸に左右対称になっているか）を判定してください。

class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        return m(root->left, root->right);
    }
    bool m(TreeNode *r1, TreeNode *r2)
    {
        if (!r1 && !r2)
            return true;
        if (!r1 || !r2)
            return false;
        if (r1->val != r2->val)
            return false;

        return m(r1->left, r2->right) && m(r1->right, r2->left);
    }
};



struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
#include <vector>
using namespace std;

//  「二分木の根ノードが与えられたとき、そのノードの値を後順（postorder）で走査した結果を返してください。」
class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> result;
        r(root, result);

        return result;
    }
    void r(TreeNode *root, vector<int> &result)
    {
        if (root == nullptr)
            return;

        r(root->left, result);
        r(root->right, result);

        result.push_back(root->val); // 後ろ順だから最後に詰めていく
    }
};

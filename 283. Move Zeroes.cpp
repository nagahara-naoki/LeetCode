// 整数配列 nums が与えられます。
// すべての 0 を配列の末尾に移動しつつ、
// 0 でない要素の相対的な順序は維持してください。
// 注意： 配列のコピーを作らず、インプレース（その場）で操作を行う必要があります。

#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int p = 0; // ０のいち
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[p] = nums[i];
                p++;
            }
        }
        while (p < nums.size())
        {
            nums[p] = 0;
            p++;
        }
    }
};

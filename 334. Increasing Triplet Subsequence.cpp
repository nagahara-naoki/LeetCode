// 整数配列 nums が与えられたとき、インデックスの組 (i, j, k) が存在して、
// i < j < k かつ nums[i] < nums[j] < nums[k]
// を満たす場合は true を返し、
// そのような組が存在しない場合は false を返してください。
#include <vector>
#include <limits.h>
using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int first = INT_MAX;  // nums[i] に相当（最小値）
        int second = INT_MAX; // nums[j] に相当（中間値）

        for (int n : nums)
        {
            if (n <= first)
            {
                first = n; // より小さい値が見つかれば first を更新
            }
            else if (n <= second)
            {
                second = n; // first より大きく、second より小さければ second を更新
            }
            else
            {
                // first < second < n を満たす値が来た → 条件成立
                return true;
            }
        }
        return false;
    }
};

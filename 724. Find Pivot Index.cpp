// 整数の配列 nums が与えられたとき、ピボットインデックスを計算しなさい。
// ピボットインデックスとは、そのインデックスの左側にあるすべての数の合計と、
// 右側にあるすべての数の合計が等しくなるインデックスのことです。
// インデックスが配列の左端にある場合、左側には要素がないので左側の合計は0になります。
// これは右端の場合にも同様です（右側に要素がなければ右側の合計は0）。
// もっとも左にあるピボットインデックスを返しなさい。
// もしそのようなインデックスが存在しない場合は、-1を返しなさい。

#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int total, left = 0;
        for (int n : nums)
        {
            total += n;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int r = total - left - nums[i];
            if (left == r)
            {
                return i;
            }
            left += nums[i];
        }

        return -1;
    }
};

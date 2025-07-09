// 空でない整数配列 nums が与えられます。
// この配列の中では、ただ 1 つの要素を除いて、すべての要素が 2 回ずつ出現します。

// 1 回だけ出現する要素を見つけてください。

// 排他的論理和、ビット演算して比較していく、最後を表示
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int r = 0;
        for (int i : nums)
        {
            r ^= i;
        }
        return r;
    }
};

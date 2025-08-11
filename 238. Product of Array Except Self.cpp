// 整数配列 nums が与えられます。次の条件を満たす配列 answer を返してください：
// answer[i] は、nums[i] を除くすべての要素の積（掛け算の結果）と等しくなるようにしてください。
// ただし、
// nums の任意の接頭辞（prefix）または接尾辞（suffix）の積は、32ビット整数に収まることが保証されています。
// さらに、次の制約を守ってください：
// 計算量は O(n) であること（n = nums の長さ）

#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> r(n, 1);
        // 初期値をnumsぶん１で埋める
        vector<int> right(n, 1);
        vector<int> left(n, 1);

        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; --i)
        {
            right[i] = right[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            r[i] = right[i] * left[i];
        }

        return r;
    }
};

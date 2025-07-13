// 非負整数 x が与えられます。
// x の平方根を計算し、小数点以下を切り捨てた整数を返してください。
// 返す値も非負整数である必要があります。

// ただし、組み込みの指数関数や演算子は使ってはいけません。
// たとえば、C++ の pow(x, 0.5) や Python の x ** 0.5 のような関数・演算子は禁止です。

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;

        int left = 1, right = x, ans = 0;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long long sq = (long long)mid * mid; // ２乗
            if (sq == x)
                return mid;

            else if (sq < x)
            {
                ans = mid;      // midは解候補
                left = mid + 1; // 右側探索
            }
            else
            {
                right = mid - 1; // 左側探索
            }
        }
        return ans;
    }
};

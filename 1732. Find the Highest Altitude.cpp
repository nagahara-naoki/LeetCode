// バイカーがロードトリップに出かけています。
// このロードトリップは、異なる高度の n + 1 個の地点から構成されています。
// バイカーは、高度 0 の地点 0 から出発します。
// 長さ n の整数配列 gain が与えられます。
// gain[i] は、地点 i と i + 1 の間の高度の増減（純増分） を表します（ただし 0 <= i < n です）。
// 最高地点の高度を返してください。

#include <vector>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int max = 0;
        int c = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            c += gain[i];
            if (c > max)
            {
                max = c;
            }
        }

        return max;
    }
};

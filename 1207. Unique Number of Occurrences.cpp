// 整数の配列 arr が与えられたとき、
// 各値の出現回数がすべて異なっている 場合は true を、
// そうでない場合は false を返してください。

#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> r;
        unordered_set<int> s;

        for (int num : arr)
        {
            r[num]++;
        }

        for (auto [n, c] : r)
        {
            if (s.count(c))
            {
                return false;
            }
            s.insert(c);
        }

        return true;
    }
};

// 2つの0始まりの整数配列 nums1 と nums2 が与えられたとき、次の条件を満たすサイズ2のリスト answer を返してください：
// answer[0] は、nums1 に存在し、nums2 には存在しない すべての異なる整数 のリストです。
// answer[1] は、nums2 に存在し、nums1 には存在しない すべての異なる整数 のリストです。
// なお、リスト内の整数の順序は 任意 とします（順番は問われません）。

#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> result = {{}, {}};
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        for (int n : set1)
        {
            if (set2.count(n) == 0)
            {
                result[0].push_back(n);
            }
        }
        for (int n : set2)
        {
            if (set1.count(n) == 0)
            {
                result[1].push_back(n);
            }
        }

        return result;
    }
};

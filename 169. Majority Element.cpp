// サイズ n の配列 nums が与えられたとき、多数派要素（majority element） を返してください。
// 多数派要素 とは、⌊n / 2⌋（n を 2 で割った整数部分）よりも多く出現する要素のことです。
// 配列には必ず多数派要素が存在すると仮定してかまいません。

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int r = nums[0];
        int c = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (c == 0)
                r = nums[i];
            if (r == nums[i])
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        std::cout << r;
        return r;
    }
};

// 考え方、
// カウント = 0, 候補 = なし
// 配列を順に見ていく
// カウントが0 → 今の要素を候補にする
// 要素が候補と同じ → カウント++
// 違う → カウント--
// 最終的に残った候補が答え（前提として多数派が存在しているため）

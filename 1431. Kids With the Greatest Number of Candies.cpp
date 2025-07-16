// n人の子どもがキャンディを持っています。
// 整数配列 candies が与えられ、candies[i] はi番目の子どもが持っているキャンディの数を表します。
// また、整数 extraCandies も与えられ、これはあなたが持っている追加のキャンディの数を表します。

// 戻り値として、長さnの真偽値の配列 result を返してください。
// result[i] が true になるのは、「i番目の子どもに全ての extraCandies を渡した場合、その子が他のどの子よりも多くのキャンディを持つことになる（または同数で最大）」場合です。
// そうでない場合は false にしてください。

// なお、複数の子どもが最大数のキャンディを持つこともあります。
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> r;
        for (int i = 0; i < candies.size(); i++)
        {
            int n = candies[i] + extraCandies;
            bool y = true;
            std::cout << n;
            for (int j = 0; j < candies.size(); j++)
            {
                if (y && candies[j] > n)
                {
                    y = false;
                    break;
                }
            }

            r.push_back(y);
        }

        return r;
    }
};

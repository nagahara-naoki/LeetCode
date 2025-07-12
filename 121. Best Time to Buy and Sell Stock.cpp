// 配列 prices が与えられます。prices[i] は、ある株の i 日目の価格 を表しています。

// あなたは、1 日だけ株を購入し、将来の別の日にその株を売却する ことで、利益を最大化したいと考えています。

// この取引によって得られる 最大の利益 を返してください。
// もし、どのように取引しても利益が得られない場合 は、0 を返してください。

// 配列を左から右に1回だけ見ながら、常に次の2つの情報を更新していきます：
// これまで見た中での最安値（m）
// その最安値で買ったと仮定した場合、今の価格で売ったときの利益（currentProfit）

// 最小の買値（m）を更新し続ける
// 今の価格で売ったら「いくら儲かるか？」（prices[i] - m）を計算
// 最大利益（maxProfit）を更新

#include <vector>
#include <limits.h> // INT_MAXを使うために必要
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int m = INT_MAX; // 初期値は十分大きな値
        int p = 0;       // リターン、最終利益

        for (int price : prices)
        {
            if (price < m)
            {
                m = price; // より安く買える日を記録
            }
            else
            {
                int f = price - m;
                if (f > p)
                {
                    p = f; // 利益最大を更新
                }
            }
        }

        return p;
    }
};

// これだタイムオーバー2回回している

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int p = 0;
//         for(int i = 0; i < prices.size(); i++) {
//             int c = prices[i]; // ここで買ったと仮定
//             for(int j = i + 1; j < prices.size(); j++) {
//                 if((prices[j] - c) > p ) {
//                     p = prices[j] - c;
//                 }
//             }
//         }
//         return p;
//     }
// };

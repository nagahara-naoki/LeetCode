// 「整数 columnNumber が与えられたとき、それに対応するExcelの列タイトルを返してください。」
// 26進数
// 1を引いてから割り算をするイメージ
// columnNumber を 1引く（columnNumber - 1）してから、
// 26で割った余りを計算（0〜25の範囲に落とすため）
// 余りを文字に変換
// 余りが0なら'A'（ASCIIコード 65 + 0 = 65）、1なら'B'（65 + 1）...という形で変換
// ** quotient（商）を更新して繰り返す**
// columnNumber = (columnNumber - 1) / 26 に更新して繰り返す
// 最後に文字列を逆順にして完成

#include <string>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int r = 0;
        for (char c : columnTitle)
        {
            int val = c - 'A' + 1; // 'A' → 1, ..., 'Z' → 26
            r = r * 26 + val;
        }
        return r;
    }
};
